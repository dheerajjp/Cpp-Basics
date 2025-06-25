#include <bits/stdc++.h>
using namespace std;

// Finds the element that appears > n/2 times in O(n) time, O(1) space
int majorityElement(const vector<int>& A) {
    int count = 0, candidate = 0;
    for (int x : A) {
        if (count == 0) {
            candidate = x;
            count = 1;
        }
        else if (x == candidate) {
            ++count;
        }
        else {
            --count;
        }
    }
    return candidate;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;                      // read array size
    vector<int> A(n);
    for (int i = 0; i < n; ++i)    // read elements
        cin >> A[i];

    cout << majorityElement(A)    // compute & print majority
         << "\n";
    return 0;
}
