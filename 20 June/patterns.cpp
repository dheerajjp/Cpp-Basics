#include <iostream>
#include <vector>
using namespace std;

// 10.1  *****  (N rows, N columns of ‘*’)
void pattern101(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cout << '*';
        cout << '\n';
    }
}

// 10.2  11111, 22222, …  (row i prints digit i, N times)
void pattern102(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < N; j++)
            cout << i;
        cout << '\n';
    }
}

// 10.3  12345 (repeated N times)
void pattern103(int N) {
    for(int i = 0; i < N; i++) {
        for(int j = 1; j <= N; j++)
            cout << j;
        cout << '\n';
    }
}

// 10.4  Increasing star triangle
void pattern104(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < i; j++)
            cout << '*';
        cout << '\n';
    }
}

// 10.5  1, 22, 333, 4444, …
void pattern105(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j < i; j++)
            cout << i;
        cout << '\n';
    }
}

// 10.6  1
//      12
//      123
//      1234
void pattern106(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++)
            cout << j;
        cout << '\n';
    }
}

// 10.7  Fibonacci‐triangle
// row 1: 1
// row 2: 1 2
// row 3: 3 5 8
// row 4: 13 21 34 55
void pattern107(int N) {
    long long a = 1, b = 1;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << a;
            long long c = a + b;
            a = b;
            b = c;
            if (j < i) cout << ' ';
        }
        cout << '\n';
    }
}

// 10.8  Perfect squares with global alternating signs
//  1
//  -4 9
//  -16 25 -36
//   49 -64 81 -100
void pattern108(int N) {
    int cnt = 1;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            int sq = cnt * cnt;
            // odd cnt → positive, even cnt → negative
            if (cnt % 2 == 0) 
                cout << '-';
            cout << sq;
            if (j < i) cout << ' ';
            cnt++;
        }
        cout << '\n';
    }
}

// 10.9  Factorial‐triangle (row i: print 1!, 2!, 3!, …, i! )
//  1
//  1 2
//  1 2 6
//  1 2 6 24
void pattern109(int N) {
    for(int i = 1; i <= N; i++) {
        long long fact = 1;
        for(int j = 1; j <= i; j++) {
            fact *= j;          // j!
            cout << fact;
            if (j < i) cout << ' ';
        }
        cout << '\n';
    }
}

int main(){
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "\n10.1 Star pattern\n";pattern101(N);
    cout << "\n10.2 Number rows\n";pattern102(N);
    cout << "\n10.3 Sequential cols\n";pattern103(N);
    cout << "\n10.4 Star triangle\n";pattern104(N);
    cout << "\n10.5 Digit‐repeat triangle\n";pattern105(N);
    cout << "\n10.6 1..i triangle\n";pattern106(N);
    cout << "\n10.7 Fibonacci triangle\n";pattern107(N);
    cout << "\n10.8 Squares ± alternation\n";pattern108(N);
    cout << "\n10.9 Factorial triangle\n";pattern109(N);

    return 0;
}
