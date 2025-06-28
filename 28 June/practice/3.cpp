#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

vector<int> parseVersion(const string& version) {
    vector<int> nums;
    stringstream ss(version);
    string token;
    while (getline(ss, token, '.')) {
        nums.push_back(stoi(token));
    }
    return nums;
}

int compareVersion(string v1, string v2) {
    vector<int> ver1 = parseVersion(v1);
    vector<int> ver2 = parseVersion(v2);
    int n = max(ver1.size(), ver2.size());

    for (int i = 0; i < n; i++) {
        int num1 = i < ver1.size() ? ver1[i] : 0;
        int num2 = i < ver2.size() ? ver2[i] : 0;

        if (num1 > num2) return 1;
        if (num1 < num2) return -1;
    }
    return 0;
}

int main() {
    string v1, v2;
    cin >> v1 >> v2;
    cout << compareVersion(v1, v2) << endl;
    return 0;
}
