#include <bits/stdc++.h>
using namespace std;

pair<int,int> firstLastOccurrence(const vector<int>& arr, int x) {
    int n = arr.size();
    int lo = 0, hi = n-1, first = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] < x) {
            lo = mid + 1;
        } else {
            if (arr[mid] == x) first = mid;
            hi = mid - 1;
        }
    }
    if (first == -1) return {-1, -1};

    lo = first; hi = n-1;
    int last = first;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] > x) {
            hi = mid - 1;
        } else {
            last = mid;
            lo = mid + 1;
        }
    }
    return {first, last};
}

int main() {
    vector<int> arr = {1,3,5,5,5,5,67,123,125};
    int x = 5;
    auto [f, l] = firstLastOccurrence(arr, x);
    cout << f << " " << l << "\n";  
    tie(f,l) = firstLastOccurrence(arr, 4);
    cout << f << " " << l << "\n";  
    return 0;
}
