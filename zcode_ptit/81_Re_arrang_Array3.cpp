#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t  ; 
    while (t--) {
        long n , k ; cin>>n>> k ; long M[n] ; long B[n] ; int count = 0 ; 
         for (long i=0 ; i<n ; i++ ) cin>>M[i] ; 
         for (long i=0 ; i<n ; i++ ) {
             if (M[i] <=k) {
                 count++ ; 
                 B[i] = true ;  
             } else {
                 B[i] = false  ; 
             }
         }
         int i=-1 , max = 0  ,dem = 0 ; 
         while(i<n ) {
             dem = 0 ;
             while(B[i+1] == true ) {
                 i++ ; 
                 dem++ ; 
             } 
             if (dem>= max) max = dem ; 
             i++ ; 
         }
        cout<< count - max ; 
    }
}