#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t ; 
    while(t--) {
        int n ; cin>> n  ; int A[n] ; int B[n] ; 
        for (int i=0  ; i<n ; i++) {
            cin>>A[i] ; 
        }

        B[0] = A[0]*A[1] ; B[n-1] = A[n-1] *A[n-2] ; 
        for (int i=1 ; i<=n-2 ; i++) {
            B[i] = A[i-1]*A[i+1] ; 
        }
        for (int i=0  ; i<n ; i++) cout<<B[i]<<" " ; 
        cout<<endl ; 
    }
}