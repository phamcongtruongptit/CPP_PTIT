#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t ; 
    while (t--) {
        long n , k ; cin>>n>> k ; bool t = true ; 
        long M[n] ; 
        for (long i=0 ; i<n ; i++) cin>>M[i] ; 
        for (long i=0 ; i<n ; i++) {
            if (k == M[i]) {
                cout<<i+1<<endl ; 
                t = false; 
                break ;  
            }
        }
    //     if (t==true)
    //     cout<<-1 <<endl  ; 
     }
}