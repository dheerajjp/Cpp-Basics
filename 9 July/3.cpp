#include <iostream>
#include <vector>
using namespace std;

int findFixedPoint(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid) {
            return mid;
        } else if (arr[mid] < mid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {-4, -2, 0, 1, 4, 6, 7};
    int result = findFixedPoint(arr);
    cout << "Fixed point index: " << result << endl;
    return 0;
}
