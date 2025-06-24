// 4. Implement Binary Search on the array.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (array must be sorted): ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to search for: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            cout << "Element " << key << " found at index " << mid << "\n";
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        cout << "Element " << key << " not found in the array\n";
    }
    return 0;
}