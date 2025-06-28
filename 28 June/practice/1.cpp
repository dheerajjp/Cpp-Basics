#include<iostream>
#include<numeric>
using namespace std;

bool isPossible(int N, int M) {
    int totalSum = N * (N + 1) / 2;

    for (int i = 1; i <= totalSum - 1; i++) {
        int sum1 = i;
        int sum2 = totalSum - i;

        if (abs(sum1 - sum2) == M && gcd(sum1, sum2) == 1)
            return true;
    }
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;

    if (isPossible(N, M))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
