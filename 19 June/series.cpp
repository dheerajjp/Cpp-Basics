#include <iostream>
using namespace std;

// 1. Natural numbers: 1,2,3,... ≤ N
void series1(int N) {
    cout << "1) 1,2,3,...,N:\n";
    for (int i = 1; i <= N; ++i) {
        cout << i << (i < N ? ", " : "");
    }
    cout << "\n\n";
}

// 2. Odd numbers: 1,3,5,... ≤ N
void series2(int N) {
    cout << "2) 1,3,5,...,N:\n";
    for (int i = 1; i <= N; i += 2) {
        cout << i << (i + 2 <= N ? ", " : "");
    }
    cout << "\n\n";
}

// 3. Squares of evens: 4,16,36,... ≤ N
void series3(int N) {
    cout << "3) 4,16,36,...,N:\n";
    for (int k = 2; k * k <= N; k += 2) {
        cout << k*k;
        if ((k+2)*(k+2) <= N) cout << ", ";
    }
    cout << "\n\n";
}

// 4. Incremental sum: 1,2,4,7,11,... ≤ N
void series4(int N) {
    cout << "4) 1,2,4,7,11,...,N:\n";
    int term = 1, inc = 1;
    while (term <= N) {
        cout << term;
        term += inc++;
        if (term <= N) cout << ", ";
    }
    cout << "\n\n";
}

// 5. Perfect squares: 1,4,9,16,... ≤ N
void series5(int N) {
    cout << "5) 1,4,9,16,...,N:\n";
    for (int i = 1; i * i <= N; ++i) {
        cout << i*i;
        if ((i+1)*(i+1) <= N) cout << ", ";
    }
    cout << "\n\n";
}

// 6. Tribonacci-like: 1,4,7,12,23,... ≤ N (sum of last 3)
void series6(int N) {
    cout << "6) 1,4,7,12,23,...,N:\n";
    int a = 1, b = 4, c = 7;
    if (a <= N) cout << a;
    if (b <= N) cout << ", " << b;
    if (c <= N) cout << ", " << c;
    while (true) {
        int d = a + b + c;
        if (d > N) break;
        cout << ", " << d;
        a = b; b = c; c = d;
    }
    cout << "\n\n";
}

// 7. Custom delta: 1,5,9,13,21,25,29,37,... ≤ N
void series7(int N) {
    cout << "7) 1,5,9,13,21,25,29,37,...,N:\n";
    int deltas[4] = {4,4,4,8};
    int term = 1, idx = 0;
    cout << term;
    while (true) {
        term += deltas[idx];
        if (term > N) break;
        cout << ", " << term;
        idx = (idx + 1) % 4;
    }
    cout << "\n\n";
}

// 8. Fibonacci: 1,1,2,3,5,8,... ≤ N
void series8(int N) {
    cout << "8) 1,1,2,3,5,8,...,N:\n";
    int a = 1, b = 1;
    if (a <= N) cout << a;
    if (b <= N) cout << ", " << b;
    while (true) {
        int c = a + b;
        if (c > N) break;
        cout << ", " << c;
        a = b; b = c;
    }
    cout << "\n\n";
}

int main() {
    int N;
    cout << "Enter the maximum value N: ";
    cin >> N;
    cout << "\n";

    series1(N);
    series2(N);
    series3(N);
    series4(N);
    series5(N);
    series6(N);
    series7(N);
    series8(N);

    return 0;
}
