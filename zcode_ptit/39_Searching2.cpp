#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t ; 
    while( t--) {
        long n ,k; cin>>n>>k  ; long M[n] ; bool t = true ; 
        for (int i=0 ; i< n ; i++) cin>>M[i] ; 
        for (int i=0 ; i<n ; i++) {
            if (k==M[i]) {
                cout<<1 <<endl ; 
                t= false ; 
                break  ; 
            }
        }
        if (t == true) {
            cout<<-1<<endl ;
        }
    }
}