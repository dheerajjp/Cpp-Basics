#include<iostream>
using namespace std;

int main() {
    int data[] = {
        120, 135, 0, 150, 140, 160, 125, 0, 155, 145,
        135, 130, 0, 150, 140, 160, 125, 155, 145, 135,
        150, 140, 160, 125, 155, 145, 135, 150, 140, 160
    };
    int n = 30;

    int total = 0;
    int nonZeroSum = 0, nonZeroCount = 0;

    for (int i = 0; i < n; i++) {
        total += data[i];
        if (data[i] != 0) {
            nonZeroSum += data[i];
            nonZeroCount++;
        }
    }

    cout << "Level 1 - Total Consumption (with zeros): " << total << endl;
    cout << "Level 2 - Average (without zeros, floor): " << (nonZeroSum / nonZeroCount) << endl;

    return 0;
}
