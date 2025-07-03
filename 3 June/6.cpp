#include <iostream>
using namespace std;

void printpattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main() {
    int a;
    cin>>a;
    printpattern6(a);
}
