// 4. Find the Maximum value of all elements in the array.

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int mx = numeric_limits<int>::min();
    for (int x : arr) {
        if (x > mx) mx = x;
    }
    cout << "Maximum element = " << mx << "\n";
    return 0;
}