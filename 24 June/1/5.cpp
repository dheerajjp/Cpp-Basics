// 5. Search the given element from the array.

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
    int key;
    cout << "Enter element to search for: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at index " << i << "\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << key << " not found in the array\n";
    }
    return 0;
}