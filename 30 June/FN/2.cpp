#include<iostream>
#include<vector>
using namespace std;

bool isCorporateDay(int day) {
    return (day % 5 == 0);
}

string getMonth(int day) {
    int daysInMonth[] = {30, 31, 30, 31, 31, 30};
    string monthNames[] = {"Apr", "May", "Jun", "Jul", "Aug", "Sep"};
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += daysInMonth[i];
        if (day <= sum)
            return monthNames[i];
    }
    return "Invalid";
}

int main() {
    int totalDays = 183;
    int dailySales = 1;
    int retailSales = 0, corporateSales = 0;

    vector<int> monthlySales(6, 0);
    int startQuerySales = 0, endQuerySales = 0;

    for (int day = 1; day <= totalDays; day++) {
        string month = getMonth(day);
        int monthIndex = -1;

        if (month == "Apr") monthIndex = 0;
        else if (month == "May") monthIndex = 1;
        else if (month == "Jun") monthIndex = 2;
        else if (month == "Jul") monthIndex = 3;
        else if (month == "Aug") monthIndex = 4;
        else if (month == "Sep") monthIndex = 5;

        monthlySales[monthIndex] += dailySales;

        if (isCorporateDay(day))
            corporateSales += dailySales;
        else
            retailSales += dailySales;

        if (day >= 136 && day <= 167)
            startQuerySales += dailySales;

        dailySales += 2 * day;
    }

    string months[] = {"April", "May", "June", "July", "August", "September"};
    cout << "Monthly Vehicle Sales:\n";
    for (int i = 0; i < 6; i++)
        cout << months[i] << ": " << monthlySales[i] << "\n";

    cout << "\nRetail Sales: " << retailSales;
    cout << "\nCorporate Sales: " << corporateSales;

    cout << "\n\nSales from Aug 15 to Sep 15: " << startQuerySales << "\n";
    return 0;
}
