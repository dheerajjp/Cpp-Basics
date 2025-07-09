#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndex;
    int maxLen = 0;
    int left = 0;

    for (int right = 0; right < s.size(); right++) {
        char current = s[right];

        if (charIndex.find(current) != charIndex.end()) {
            left = max(charIndex[current] + 1, left);
        }

        charIndex[current] = right; 
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string str = "enjoyalgorithms";
    int result = lengthOfLongestSubstring(str);
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}
