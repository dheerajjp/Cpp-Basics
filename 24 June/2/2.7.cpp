// 7. Check if a given element exists in a 2D array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> mat(rows, vector<int>(cols));

    cout << "Enter elements row by row:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat[i][j];
        }
    }

    int key;
    cout << "Enter element to search for: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < rows && !found; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (mat[i][j] == key) {
                cout << "Element " << key << " found at position (" << i << ", " << j << ")\n";
                found = true;
                break;
            }
        }
    }
    if (!found) {
        cout << "Element " << key << " not found in the 2D array\n";
    }
    return 0;
}