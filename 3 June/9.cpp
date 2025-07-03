#include <iostream>
using namespace std;

void printpattern9_1(int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<m-i-1; j++){
            cout<<" ";
        }
        
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<m-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void printpattern9_2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    printpattern9_1(a);
    printpattern9_2(b);
}
