#include<iostream>
#include<cmath>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double term = pow(i, i) / (double)factorial(i);
        sum += term;
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}
