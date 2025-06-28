#include <iostream>
using namespace std;
const int MOD = 1000000007;



long long mod_mul(long long a, long long b) {
    return (a % MOD * b % MOD) % MOD;
}

long long mod_inv(long long a) {
    long long res = 1, b = MOD - 2;
    while (b) {
        if (b & 1) res = mod_mul(res, a);
        a = mod_mul(a, a);
        b >>= 1;
    }
    return res;
}

long long triplet_count(int N) {
    long long n = N;
    long long result = mod_mul(n, n + 1);
    result = mod_mul(result, 2 * n + 1);
    result = mod_mul(result, mod_inv(6));
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << triplet_count(N) << "\n";
    }
    return 0;
}
