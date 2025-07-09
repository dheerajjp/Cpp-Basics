#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;
    for (int num : nums) {
        if (seen.count(target - num)) {
            return true;
        }
        seen[num] = 1;
    }
    return false;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool res = twoSum(arr, target);
    cout << (res ? "true" : "false") << endl;
}
