
#include <iostream>
using namespace std;

void printpattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int a;
    cin>>a;
    printpattern1(a);
}
