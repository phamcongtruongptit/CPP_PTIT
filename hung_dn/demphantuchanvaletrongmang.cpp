#include<iostream>
using namespace std ;
int main ( int argc, char** argv) {
    int n;
    cin>>n;
    int m[n];
    for (int i=0; i<n;i++) {
        cin>>m[i];
    }
    int le=0 , chan=0;
    for (int i=0 ; i<n; i++) {
        if (m[i]%2==1) {
            le++;
        } else if  (m[i]%2==0) {
            chan++;
        } 
    }
    cout<<chan<<" "<<le;



    return 0;
}