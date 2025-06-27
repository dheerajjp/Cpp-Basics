#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;

ll mod_add(ll a, ll b) {
    return (a + b) % MOD;
}

ll mod_sub(ll a, ll b) {
    return (a - b + MOD) % MOD;
}

ll mod_mul(ll a, ll b) {
    return (a * b) % MOD;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, p;
        cin >> n >> m >> p;

        vector<ll> dp(n + 1, 0);
        dp[0] = 1;

        for (int child = 0; child < m - p; ++child) {
            vector<ll> new_dp(n + 1, 0);
            for (int sum = 0; sum <= n; ++sum) {
                for (int add = 0; sum + add <= n; add += 2) {
                    new_dp[sum + add] = mod_add(new_dp[sum + add], dp[sum]);
                }
            }
            dp = new_dp;
        }

        for (int child = 0; child < p; ++child) {
            vector<ll> new_dp(n + 1, 0);
            for (int sum = 0; sum <= n; ++sum) {
                for (int add = 1; sum + add <= n; add += 2) {
                    new_dp[sum + add] = mod_add(new_dp[sum + add], dp[sum]);
                }
            }
            dp = new_dp;
        }

        cout << dp[n] << '\n';
    }

    return 0;
}
