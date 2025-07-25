#include<iostream>
using namespace std;
typedef long long ll;



ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        ll a, b, n;
        cin >> a >> b >> n;
        ll l = lcm(a, b);
        cout << l * n << "\n";
    }
    return 0;
}
