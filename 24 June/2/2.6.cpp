// 6. Compute the sum of all elements in a 2D array

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

    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += mat[i][j];
        }
    }

    cout << "Sum of all elements = " << sum << "\n";
    return 0;
}