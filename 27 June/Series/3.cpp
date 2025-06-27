#include <iostream>
using namespace std;

int main() {
    int n, term = 2;
    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << term << " ";
        term += (13 + (i - 1) * 10);
    }
    return 0;
}
