#include <iostream>
#include <algorithm>
using namespace std;

bool hasPairWithSum(int arr[], int n, int targetSum) {
    sort(arr, arr + n);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == targetSum)
            return true;
        else if (currentSum < targetSum)
            left++;
        else
            right--;
    }

    return false;
}

int main() {
    int arr[] = {-5, 1, -40, 20, 6, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 15;

    if (hasPairWithSum(arr, n, targetSum))
        cout << "Output: true\n";
    else
        cout << "Output: false\n";

    return 0;
}
