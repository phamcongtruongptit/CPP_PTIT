#include<bits/stdc++.h>
using namespace std ; 

bool kiemtra( long n ) {
    for (int i=2 ; i<=sqrt(n) ; i++) {
        if (n% i ==0) {
            return false ;
            break ;
        }
    }
    return true ;
}

main () {
    int t; cin>>t ;
    while (t--) {
        long a ;  cin>>a; 
        for (int i=2 ; i<=a ; i++) {
            if (kiemtra(i)) {
                cout<<i<<" ";
            }
        }
        cout<<endl ;
    }

}