#include <iostream>
using namespace std;

int main() {
    int n, term = -1;
    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << term << " ";
        term = (term > 0) ? -(term + 3) : -(term - 3);
    }
    return 0;
}
