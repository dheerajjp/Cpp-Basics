#include <bits/stdc++.h>
using namespace std;

int findBitonicMax(const vector<int>& arr) {
    int lo = 0, hi = arr.size()-1;
    while (lo < hi) {
        int mid = lo + (hi - lo)/2;
        if (arr[mid] < arr[mid+1]) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return arr[lo];
}

int main() {
    cout << findBitonicMax({18,110,210,452,810,500,101,13}) << "\n"; 
    cout << findBitonicMax({1,2,3,4,5}) << "\n";                   
    return 0;
}
