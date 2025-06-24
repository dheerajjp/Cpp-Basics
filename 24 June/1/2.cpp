// 2. Level 1: Find the Sum of all elements in the array.

#include <iostream>
#include <vector>
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
    int sum = 0;
    for (int x : arr) {
        sum += x;
    }
    cout << "Sum of elements = " << sum << "\n";
    return 0;
}