#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> countDistinctInWindow(vector<int>& arr, int k) {
    unordered_map<int, int> freqMap;
    vector<int> result;

    for (int i = 0; i < k; i++) {
        freqMap[arr[i]]++;
    }
    result.push_back(freqMap.size());

    for (int i = k; i < arr.size(); i++) {
        freqMap[arr[i - k]]--;
        if (freqMap[arr[i - k]] == 0) {
            freqMap.erase(arr[i - k]);
        }

        freqMap[arr[i]]++;

        result.push_back(freqMap.size());
    }

    return result;
}

int main() {
    vector<int> X = {1, 1, 1, 3, 4, 2, 3};
    int k = 4;

    vector<int> output = countDistinctInWindow(X, k);
    
    cout << "Output: ";
    for (int count : output) {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
