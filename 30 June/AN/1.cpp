#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int charToValue(char c) {
    if (c == ' ') return 0;
    if (c == '.') return 99;
    if (c >= 'a' && c <= 'z') return c - 'a' + 1;
    if (c >= 'A' && c <= 'Z') return c - 'A' + 27;
    return -1;
}

void encryptText(const string& text) {
    vector<int> originalVals;
    vector<int> encryptedVals;
    int sumOriginal = 0, sumEncrypted = 0;

    string word = "";
    for (int i = 0; i <= text.length(); i++) {
        if (i < text.length() && text[i] != ' ' && text[i] != '.') {
            word += text[i];
        } else {
            int n = word.length();
            for (char c : word) {
                int base = charToValue(c);
                int enc = base + n * 100;
                originalVals.push_back(base);
                encryptedVals.push_back(enc);
                sumOriginal += base;
                sumEncrypted += enc;
            }

            if (i < text.length() && (text[i] == ' ' || text[i] == '.')) {
                int base = charToValue(text[i]);
                int enc = base + 100;
                originalVals.push_back(base);
                encryptedVals.push_back(enc);
                sumOriginal += base;
                sumEncrypted += enc;
            }

            word = "";
        }
    }

    cout << "Original Values:\n";
    for (int val : originalVals) cout << val << " ";
    cout << "\n\nEncrypted Values:\n";
    for (int val : encryptedVals) cout << val << " ";

    cout << "\n\nSum of Original Values: " << sumOriginal;
    cout << "\nSum of Encrypted Values: " << sumEncrypted << "\n";
}

int main() {
    string input = "COVID crisis has taught us... India will emerge stronger.";
    encryptText(input);
    return 0;
}
