#include <iostream>
using namespace std;

void printpattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

int main() {
    int a;
    cin>>a;
    printpattern4(a);
}
