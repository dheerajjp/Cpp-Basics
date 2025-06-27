#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxArea = 0;
    int left = 0, right = height.size() - 1;

    while (left < right) {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        int area = width * currentHeight;
        maxArea = max(maxArea, area);

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maxArea;
}

int main() {
    vector<int> height = {1, 5, 6, 3, 4, 2};
    cout << "Maximum area: " << maxArea(height) << endl;
    return 0;
}
