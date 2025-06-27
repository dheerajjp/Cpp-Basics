#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int t1 = 10, t2 = 5;

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            cout << t1 << " ";
            t1 += 50;
        } else {
            cout << t2 << " ";
            t2 += 10;
        }
    }
    return 0;
}
