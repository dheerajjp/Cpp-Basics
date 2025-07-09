
#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return arr[low];
}

int main() {
    vector<int> X = {18, 110, 210, 452, 810, 500, 101, 13};
    int maxValue = findPeakElement(X);
    cout << "Maximum value in the array: " << maxValue << endl;

    return 0;
}
