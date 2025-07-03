#include <iostream>
using namespace std;

void printpattern7(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }//space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int a;
    cin>>a;
    printpattern7(a);
}
