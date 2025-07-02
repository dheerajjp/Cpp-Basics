#include<iostream>
using namespace std;

int main() {
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    float discountPrice = 0.8 * (r1 + r2 + r3);
    
    int minPrice = min(r1, min(r2, r3));
    int freeItemPrice = r1 + r2 + r3 - minPrice;

    if (discountPrice < freeItemPrice)
        cout << "DISCOUNT";
    else
        cout << "FREE ITEM";

    return 0;
}
