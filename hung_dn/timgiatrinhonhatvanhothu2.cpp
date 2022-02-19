#include<iostream>
using namespace std ; 
int main (int argc, char**argv) {
    int n;
    cin>>n;
    int m[n];
    for (int i=0 ; i<n; i++) {
        cin>>m[i];
    }
    int min = m[0], max = m[0];
    for (int i=0 ; i<n; i++) {
        if (m[i]<min) {
            min = m[i];
        }
        if (m[i]>max) {
            max = m[i];
        }
    }
    int min2 = max;
    for (int i=0 ; i<n; i++) {
        if (m[i]<min2 && min!=m[i]) {
            min2 = m[i];
        }
    }
    cout<<min<<" "<<min2;


    
    return 0;
}