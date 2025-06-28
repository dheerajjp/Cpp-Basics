#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) return 0;

    int a = 1, b = 2, c = 5;

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            cout << a << " ";
        else if (i == 2)
            cout << b << " ";
        else if (i == 3)
            cout << c << " ";
        else {
            int d = a + b + c;
            cout << d << " ";
            a = b;
            b = c;
            c = d;
        }
    }

    return 0;
}
