#include <iostream>
using namespace std;

void printpattern10_1(int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printpattern10_2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    printpattern10_1(a);
    printpattern10_2(b);
}
