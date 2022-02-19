#include<iostream>
using namespace std;
int main (int argc , char**argv) {
    int n;
    cin>>n;
    int m[n];
    for (int i=0 ; i<n ; i++) {
        cin>> m[i];
    }
    int chan=0 , le=0 ;
    for (int i=0 ; i<n ; i++) {
        if (m[i]%2==0) {
            chan++;
        }
        if (m[i]%2==1) {
            le++;
        }
    }
    cout<<le<<" "; 
    for (int i=0 ; i<n; i++) {
        if (m[i]%2==1) {
            cout<<m[i]<<" ";
        }
    }
    cout<<endl;
    cout<<chan<<" "; 
    for (int i=0 ; i<n; i++) {
        if (m[i]%2==0) {
            cout<<m[i]<<" ";
        }
    }
    return 0;
}