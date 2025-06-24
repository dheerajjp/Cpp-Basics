// 3. Sort the array in ascending or descending order based on user input

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

    char choice;
    cout << "Sort ascending (A) or descending (D)? ";
    cin >> choice;

    if (choice == 'A' || choice == 'a') {
        sort(arr.begin(), arr.end());
        cout << "Ascending order: ";
    } else if (choice == 'D' || choice == 'd') {
        sort(arr.begin(), arr.end(), greater<int>());
        cout << "Descending order: ";
    } else {
        cout << "Invalid choice. Showing original array: ";
    }

    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}