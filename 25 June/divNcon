#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using ll = long long;

ll maxCrossingSum(const std::vector<ll>& A, int l, int m, int r) {
    ll leftSum  = std::numeric_limits<ll>::min(),
       sum = 0;
    for (int i = m; i >= l; --i) {
        sum += A[i];
        leftSum = std::max(leftSum, sum);
    }
    ll rightSum = std::numeric_limits<ll>::min();
    sum = 0;
    for (int j = m + 1; j <= r; ++j) {
        sum += A[j];
        rightSum = std::max(rightSum, sum);
    }
    return leftSum + rightSum;
}

ll maxSubarrayDC(const std::vector<ll>& A, int l, int r) {
    if (l == r) 
        return A[l];
    int m = l + (r - l) / 2;
    ll leftMax  = maxSubarrayDC(A, l,   m);
    ll rightMax = maxSubarrayDC(A, m+1, r);
    ll crossMax = maxCrossingSum(A, l, m, r);
    return std::max({leftMax, rightMax, crossMax});
}

int main() {
    std::vector<ll> A = { -4, 5, 7, -6, 10, -15, 3 };
    ll result = maxSubarrayDC(A, 0, (int)A.size()-1);
    std::cout << "Maximum subarray sum = " << result << "\n";
    return 0;
}
