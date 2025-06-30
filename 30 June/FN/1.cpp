#include<iostream>
using namespace std;

void digitToWords(int num) {
    string words[] = {"Zero", "One", "Two", "Three", "Four", 
                      "Five", "Six", "Seven", "Eight", "Nine"};
    
    string res = "";
    string s = to_string(num);
    
    for (char c : s) {
        int digit = c - '0';
        cout << words[digit] << " ";
    }
}

int main() {
    int number = 270176;
    digitToWords(number);
    return 0;
}
