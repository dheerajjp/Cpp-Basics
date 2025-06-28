#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    double sum = 0.0;
    for (int i = 1; i < n; i++) {
        sum += (double)i / (i + 1);
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}
