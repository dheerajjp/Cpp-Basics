#include <bits/stdc++.h>
using namespace std;

int findFixedPoint(const vector<int>& arr) {
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] == mid) {
            return mid;
        } else if (arr[mid] < mid) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}

int main() {
    cout << findFixedPoint({-4, -2, 0, 1, 4, 6, 7}) << "\n";  
    cout << findFixedPoint({-10, -5, 3, 4, 7, 9})    << "\n";  
    return 0;
}
