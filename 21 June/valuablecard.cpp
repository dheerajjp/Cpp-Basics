#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    // 1. Valuable Customer Card
    double r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    double total = r1 + r2 + r3;
    double discountRev = total * 0.8;// 20% off
    double freeRev     = total - min(r1, min(r2, r3));// cheapest free
    if (discountRev < freeRev)
        cout << "DISCOUNT\n";
    else
        cout << "FREE ITEM\n";

    // 2. Watermelon Division
    int w;
    cin >> w;
    if (w < 1 || w > 100) {
        cout << "Invalid Input\n";
    } else if (w > 2 && w % 2 == 0) {
        cout << "YES\n" << w/2 << " " << w/2 << "\n";
    } else {
        cout << "NO\n";
    }

    // 3. VIVA on Odd Numbers
    double x;
    int oddCount = 0;
    double score = 0.0;
    while (cin >> x) {
        if (x < 0) {
            score -= 1.0;
            break;
        }
        if (floor(x) == x) {  // it's an integer
            long xi = static_cast<long>(x);
            if (xi > 0 && xi % 2 != 0) {
                score += 1.0;
                if (++oddCount == 3) break;
            } else if (xi >= 0 && xi % 2 == 0) {
                score -= 0.5;
            }
        }
        // non-integer inputs are ignored
    }
    cout << fixed << setprecision(1) << score << "\n";

    // 4. Vietnam Flag Pattern
    int n;
    cin >> n;  // assume n is odd
    int mid = n / 2;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == mid && j == mid)
                cout << '*';
            else
                cout << '~';
            if (j < n - 1) cout << ' ';
        }
        cout << '\n';
    }

    // 5. Fruitseller Profit/Loss
    double X, Y;
    cout << "Enter the price of a dozen mangoes\n";
    cin >> X;
    cout << "Enter the price at which 1 mango is being sold\n";
    cin >> Y;
    double revenue = 12 * Y;
    double diff    = revenue - X;
    cout << fixed << setprecision(2);
    if (diff > 0) {
        cout << "Profit : Rs." << diff << "\n";
    } else if (diff < 0) {
        cout << "Loss : Rs." << -diff << "\n";
    } else {
        cout << "No profit nor loss\n";
    }

    return 0;
}
