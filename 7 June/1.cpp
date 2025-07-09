#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        int current_area = width * h;
        max_area = max(max_area, current_area);

        if (height[left] < height[right]) {
            ++left;
        } else {
            --right;
        }
    }

    return max_area;
}

int main() {
    vector<int> height = {1, 5, 6, 3, 4, 2};
    int result = maxArea(height);
    cout << "Maximum water that can be contained: " << result << endl;
    return 0;
}
