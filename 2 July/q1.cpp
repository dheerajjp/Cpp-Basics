#include<iostream>
using namespace std;

int main() {
    int day, bill;
    cin >> day >> bill;

    int lastDigitOfDay = day % 10;
    if (bill % day == 0 || bill % 10 == lastDigitOfDay)
        cout << "yes";
    else
        cout << "no";

    return 0;
}
