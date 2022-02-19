#include<iostream>
using namespace std ; 
void taomang(int M[] , int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>M[i] ;
    }

}

void inmang(int M[] , int m[] , int a, int b, int p) {
    for (int i = 0 ; i<a ; i++) {
        if ( i == p) {
            for (int j=0 ; j<b ; j++) {
                cout<<m[j]<<" ";
            }
        }
        cout<<M[i]<<" ";
        if (i== a-1 && i<p) {
            for (int j=0 ; j<b ; j++) {
                cout<<m[j]<<" ";
            }
        }
    }
}

main () {
    int a,b, p ; 
    cin>>a>>b>>p ;
    int M[100] , m[100] ;
    taomang(M , a) ; 
    taomang(m , b) ; 
    inmang(M, m ,a,b,p) ;

}