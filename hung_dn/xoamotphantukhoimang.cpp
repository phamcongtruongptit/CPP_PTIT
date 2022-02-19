#include<iostream>
using namespace std ; 
int main (int argc, char**argv) {
    int n;
    cin>>n;
    int m[n];
    for (int i=0 ; i<n; i++) {
        cin>>m[i];
    }
    int x;
    cin>>x;
    for (int i=0 ; i<n; i++) {
        if(m[i]!=m[x-1]) {
            cout<<m[i]<<" ";
        }
    }
    return 0;
}