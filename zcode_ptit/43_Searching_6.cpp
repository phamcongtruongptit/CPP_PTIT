#include<bits/stdc++.h>
using namespace std ; 
main ( ) {
    int t ; cin>>t ; 
    while (t-- ) {
        int n ; cin>> n ; 
        long M[n] ; 
        for (int i=0 ; i<n ; i++)  cin>>M[i] ; 
        long tong= M[0] +M[1] ; long k ;  
        long min = abs(tong) ; 
        for (int i=0 ; i<n-1 ; i++){
            for (int j=i+1 ; j<n ; j++) {
                tong  = M[i]+M[j] ; 
                if (min > abs(tong) ) {
                    min = abs(tong) ; 
                     k = tong ; 
                }
            }
        }
        cout<< k <<endl ; 
        
    }
}