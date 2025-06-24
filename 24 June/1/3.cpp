// 3. Find the Minimum value of all elements in the array.

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
    int mn = numeric_limits<int>::max();
    for (int x : arr) {
        if (x < mn) mn = x;
    }
    cout << "Minimum element = " << mn << "\n";
    return 0;
}