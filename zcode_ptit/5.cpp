#include<bits/stdc++.h>
using namespace std ; 
main () {
    int t; cin>>t ;
    while (t--) {
        long long n; cin>>n ;
        long M[100000]={0} ; long  k=0 ; 
        for (int i=2 ; i<=sqrt(n) ; i++) {
            while ( n%i == 0 ) {
               
               // k++ ; // khoong can k++ hay cai deo gi khac. 
                n/=i ;
                M[k] = i ;
                
            }
        }
        if(n!=1) {
            M[k] = n ;
        }
        cout<<M[k]<<endl ; 
        
    }
}