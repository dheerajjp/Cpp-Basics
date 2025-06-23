#include <iostream>
#include <string>
#include <regex>
#include <iomanip>
#include <limits>

using namespace std;

bool validName(const string& name) {
    if (name.empty() || name.size() > 50) return false;
    for (char c : name) {
        if (!(isalpha(c) || c == ' ')) return false;
    }
    return true;
}

bool validEmpID(const string& id) {
    if (id.size() < 5 || id.size() > 10) return false;
    for (char c : id) {
        if (!isalnum(c)) return false;
    }
    return true;
}

double readDouble(const string& prompt, double minVal, double maxVal) {
    double x;
    while (true) {
        cout << prompt;
        if (cin >> x && x >= minVal && x <= maxVal) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return x;
        }
        cout << "  [Error: enter a number between " << minVal << " and " << maxVal << "]\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main() {
    string name, empID;

    // 1. Input & validation
    do {
        cout << "Enter Name: ";
        getline(cin, name);
        if (!validName(name))
            cout << "  [Error: Name must be 1–50 letters/spaces]\n";
    } while (!validName(name));

    do {
        cout << "Enter EmpID: ";
        getline(cin, empID);
        if (!validEmpID(empID))
            cout << "  [Error: EmpID must be 5–10 alphanumeric characters]\n";
    } while (!validEmpID(empID));

    double basicSalary = readDouble("Basic Monthly Salary (₹): ", 1, 1e7);
    double specialAllow = readDouble("Special Allowances (Monthly ₹): ", 0, 1e7);
    double bonusPct = readDouble("Bonus Percentage (0–100): ", 0, 100);

    // 2. Salary calculations
    double grossMonthly = basicSalary + specialAllow;
    double annualBeforeBonus = grossMonthly * 12.0;
    double bonusAmount = (bonusPct / 100.0) * annualBeforeBonus;
    double annualGross = annualBeforeBonus + bonusAmount;

    // 3. Taxable income
    const double standardDeduction = 50000.0;
    double taxableIncome = max(0.0, annualGross - standardDeduction);

    // 4. Tax computation by slabs
    double tax = 0.0;
    struct Slab { double limit; double rate; };
    Slab slabs[] = {
        {300000, 0.00},
        {600000, 0.05},
        {900000, 0.10},
        {1200000, 0.15},
        {1500000, 0.20},
        {numeric_limits<double>::infinity(), 0.30}
    };

    double lower = 0.0;
    for (auto &s : slabs) {
        if (taxableIncome > lower) {
            double taxableInThisSlab = min(s.limit, taxableIncome) - lower;
            tax += taxableInThisSlab * s.rate;
        }
        lower = s.limit;
        if (lower >= taxableIncome) break;
    }

    // 5. Section 87A rebate
    if (taxableIncome <= 700000.0) {
        tax = 0.0;
    }

    // 6. Health & Education Cess (4%)
    double cess = tax * 0.04;
    double totalTax = tax + cess;

    // 7. Net salary
    double netAnnual = annualGross - totalTax;

    // 8. Report output
    cout << fixed << setprecision(2);
    cout << "\nEmployee Tax Report\n";
    cout << left << setw(25) << "Name:"<< name << "\n";
    cout << left << setw(25) << "EmpID:"<< empID << "\n";
    cout << left << setw(25) << "Gross Monthly Salary:"<< "₹" << grossMonthly << "\n";
    cout << left << setw(25) << "Annual Gross Salary:"<< "₹" << annualGross << "\n";
    cout << left << setw(25) << "Standard Deduction:"<< "₹" << standardDeduction << "\n";
    cout << left << setw(25) << "Taxable Income:"<< "₹" << taxableIncome << "\n";
    cout << left << setw(25) << "Tax before rebate:" << "₹" << tax << "\n";
    cout << left << setw(25) << "Health & Edu Cess:"<< "₹" << cess << "\n";
    cout << left << setw(25) << "Total Tax Payable:"<< "₹" << totalTax << "\n";
    cout << left << setw(25) << "Annual Net Salary:"<< "₹" << netAnnual << "\n";
    
    return 0;
}
