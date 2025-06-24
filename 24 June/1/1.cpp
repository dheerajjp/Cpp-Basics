// 1. Write a program to accept n and store the elements into the array of size n

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "You entered: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}