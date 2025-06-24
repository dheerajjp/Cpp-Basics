// 2. Reverse the given array

#include <iostream>
#include <vector>
#include <algorithm>
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
    reverse(arr.begin(), arr.end());
    cout << "Reversed array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}