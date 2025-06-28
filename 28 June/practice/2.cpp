#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(const string& s, int skip = -1) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (l == skip) l++;
        if (r == skip) r--;
        if (s[l] != s[r])
            return false;
        l++; r--;
    }
    return true;
}

int findDigitToRemove(string input) {
    if (isPalindrome(input)) return -1;

    int l = 0, r = input.size() - 1;
    while (l < r) {
        if (input[l] != input[r]) {
            if (isPalindrome(input, l)) return input[l] - '0';
            else if (isPalindrome(input, r)) return input[r] - '0';
            else return -1;
        }
        l++; r--;
    }
    return -1;
}

int main() {
    string input;
    cin >> input;
    cout << findDigitToRemove(input) << endl;
    return 0;
}
