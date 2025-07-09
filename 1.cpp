#include <iostream>
#include <vector>
using namespace std;

int findFirst(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

pair<int, int> findFirstAndLast(const vector<int>& arr, int x) {
    int first = findFirst(arr, x);
    int last = findLast(arr, x);
    return {first, last};
}

int main() {
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x = 5;
    
    auto [first, last] = findFirstAndLast(arr, x);
    cout << "First and last occurrence of " << x << " = [" << first << ", " << last << "]" << endl;

    return 0;
}
