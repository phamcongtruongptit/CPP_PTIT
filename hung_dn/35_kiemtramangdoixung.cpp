#include<bits/stdc++.h>
using namespace std ; 
void taomang (int M[] , int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>M[i]; 
    }
}

void test(int M[] , int m[] ,int n , int &x) {
    x = 0 ; 
    for (int i = n-1 ; i>= 0 ; i-- ) {
        m[x] = M[i] ; 
        x++ ; 
    }
}

int doixung (int M[ ] , int m[] ,int  n ) {
    bool kiemtra  = true ; 
    for (int i=0 ; i<n ; i++) {
        if ( M[i] != m[i] ) {
            kiemtra  = false ; 
         break;    
        }
    }
    if (kiemtra  == false) {
        return 0 ;
    } else {
        return 1; 
    }
}




main () {
    int n ; cin>>n; 
    int M[100], m[100] ; 
    taomang(M , n) ;
    int x ; 
    test(M, m , n, x ) ;
// for (int  i = 0 ; i<x ; i++) {
//     cout<<m[i]<<" ";
// }
// cout<<endl ; 

    cout<<doixung(M , m , n );

}