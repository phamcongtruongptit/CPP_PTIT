#include<bits/stdc++.h>
using namespace std; 
bool nguyento (int n) {
    if (n<=1) {
        return false ; 
    } 
    for (int i=2 ; i<= sqrt(n) ; i++) {
        if (n%i == 0) {
            return false ; 
        }
    }
    return true ; 
}  
main () {
    int t ; cin>>t ;
    while (t--) {
        int count = 0 ; 
        int n; cin>>n ; 
        for (int i=1 ; i<=n ; i++) {
            if(__gcd(i,n) ==1 ) {
                count ++ ; 
            }
        }
        if (nguyento(count)) {
            cout<<1<<endl ; 
        } else {
            cout<<0 <<endl ; 
        }

    }
}