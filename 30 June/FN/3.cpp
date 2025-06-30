#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_set>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i=2; i*i<=n; ++i)
        if (n % i == 0) return false;
    return true;
}

bool hasUniqueDigits(int n) {
    unordered_set<char> digits;
    string s = to_string(n);
    for (char c : s) {
        if (digits.count(c)) return false;
        digits.insert(c);
    }
    return true;
}

int main() {
    vector<vector<int>> buckets(100);
    vector<int> level2Sums(100, 0);

    for (int i = 1; i <= 10000; i++) {
        if (i % 10 != 9 || !isPrime(i)) continue;

        int range = i / 100;
        buckets[range].push_back(i);

        if (hasUniqueDigits(i)) {
            level2Sums[range] += i;
        }
    }

    for (int i = 0; i < 100; i++) {
        if (!buckets[i].empty()) {
            cout << "[" << (i*100) << "-" << (i*100+99) << "] : "
                 << "Count = " << buckets[i].size()
                 << ", Unique-digit Prime Sum = " << level2Sums[i] << endl;
        }
    }

    return 0;
}
