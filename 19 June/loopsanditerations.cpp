#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Item {
    string code, desc;
    int qty;
    double price;
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    for (int i = 0; i < n; ++i) {
        cout << "\nItem " << i+1 << ":\n";
        cout << " Code: "; 
        cin >> items[i].code;
        cin.ignore();  
        cout << " Description: "; 
        getline(cin, items[i].desc);
        cout << " Quantity: "; 
        cin >> items[i].qty;
        cout << " Unit price: "; 
        cin >> items[i].price;
    }

    // 9.2
    double subtotal = 0;
    int totalQty = 0;
    for (auto &it : items) {
        subtotal += it.qty * it.price;
        totalQty += it.qty;
    }

    // 9.6
    double promoDisc = 0;
    for (auto &it : items) {
        if (it.code == "PROMO10") {
            promoDisc += it.qty * it.price * 0.10;
        }
    }
    double total = subtotal - promoDisc;

    // 9.3
    if (total > 10000) {
        total *= 0.90; 
    }
    if (totalQty > 20) {
        total *= 0.95; 
    }

    // 9.4
    char member;
    cout << "\nAre you a member? (y/n): ";
    cin >> member;
    if (member=='y' || member=='Y') {
        total *= 0.98; 
    }

    // 9.5
    double taxRate = (total < 5000 ? 0.05 : (total <= 20000 ? 0.10 : 0.15));
    double tax = total * taxRate;
    total += tax;

    // 9.7
    char mode;
    cout << "Payment mode—Cash(c) / Credit(d): ";
    cin >> mode;
    if (mode=='d' || mode=='D') {
        total *= 1.02; 
    }

    // 9.8
    if (total < 500) {
        cout << "\nPurchase below ₹500—cannot generate invoice.\n";
        return 0;
    }

    // 9.9
    int points = static_cast<int>(total) / 100;

    
    cout << fixed << setprecision(2);
    cout << "\nSubtotal:₹" << subtotal
         << "\nPromo Discount: -₹" << promoDisc
         << "\nAfter Discounts:₹" << (subtotal - promoDisc)
         << "\nTax:₹" << tax
         << "\nFinal Amount:₹" << total
         << "\nLoyalty Points: " << points << "\n";

    return 0;
}


