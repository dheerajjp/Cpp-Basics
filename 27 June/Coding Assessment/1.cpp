#include <iostream>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7;

ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll modInverse(ll a, ll mod) {
    return power(a, mod - 2, mod);
}

int main() {
    ll n;
    cin >> n;

    ll total = power(6, n, MOD);
    ll palindromes = power(6, (n + 1) / 2, MOD);

    ll invTotal = modInverse(total, MOD);
    ll result = (palindromes * invTotal) % MOD;

    cout << result << endl;
    return 0;
}
