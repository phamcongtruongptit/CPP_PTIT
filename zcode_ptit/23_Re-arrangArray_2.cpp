#include<iostream>
using namespace std ; 
main (){
    int t ; cin>>t ; 
    while (t--) {
        long n  ; cin>> n ; long M[n] ; long B[n] ; long k =0 ; 
        for (long i=0 ; i<n ; i++) cin>>M[i] ; 
        for (long i=0 ; i<n ; i++) {
            if (M[i] != 0 ) {
                B[k ] = M[i] ; k++ ; 
            }
        }
        for (long j=k ; j< n ; j++) B[j] = 0 ; 
        for (long i=0 ; i<n  ; i++) cout<<B[i]<< " " ; 
        cout<<endl ; 
    }
}