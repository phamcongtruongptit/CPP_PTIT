#include<bits/stdc++.h>
using namespace std ; 

bool kiemtra( long n ) {
    for (int i=2 ; i<=sqrt(n) ; i++) {
        // if ( i==1 ) {
        //     return false;
         
        // }
        if (n% i == 0) {
            return false ;
            break ;
        }
    }
    return true ;
}

main () {
    // int t; cin>>t ;
    // while (t--) {
        unsigned long a ;  cin>>a; unsigned long b ; cin>>b ;
        for (int i= (a<=b?a:b)+ 1 ; i<   (a >b?a:b) ; i++) {
            if ( kiemtra(i) && i!=1 && i!=0) {
                cout<<i<<" ";
            }
        }
    //     cout<<endl ;
    // }

}