#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int term = 0, i = 1;
    cout << term << " ";
    
    while(--n > 0) {
        if(i % 3 == 1) term += 6;
        else if(i % 3 == 2) term += 4;
        else term += 7; // 3rd step
        
        cout << term << " ";
        i++;
    }
    return 0;
}
