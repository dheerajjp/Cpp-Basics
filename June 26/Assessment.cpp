#include <iostream>
using namespace std;

int getRate(long long c) {
    if (c <= 10) return 10;
    else if (c <= 230) return 5;
    else if (c <= 559) return 8;
    else if (c <= 1009) return 2;
    else if (c <= 5000) return 7;
    else if (c <= 10000) return 8;
    else return 3;
}

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long s, t;
        cin >> s >> t;

        int time = 0;
        while (s < t) {
            s += getRate(s);
            time++;
        }
        cout << time << endl;
    }

    return 0;
}
