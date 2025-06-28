#include<iostream>
using namespace std;

string convertToTitle(int n) {
    string result = "";
    while (n > 0) {
        n--;
        result = char(n % 26 + 'A') + result;
        n /= 26;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << convertToTitle(n) << endl;
    return 0;
}
