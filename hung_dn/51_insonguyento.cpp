#include<iostream>
#include<math.h>
using namespace std ;
bool nguyento(int a) {
    if (a==1) {
        return false ; 
    } 
    for(int i=2 ;i<=sqrt(a) ; i++) {
        if  (a%i ==0) {
            return false ; 
        }
    }
    return true ; 
    }

void taomang(int M[] , int n) {
        for (int i=0 ; i<n; i++) {
            cin>>M[i] ;
        }
    }

    void mangnguyento(int M[] , int m[] ,int n, int &count ) {
        for(int i=0 ; i<n ; i++) {
            if (nguyento(M[i])) {
                m[count] = M[i] ; 
                count++ ;  
            }
        }
    }

main () {
    int n ; cin>> n ; int count= 0 ;
    int M[100]  , m[100] ;
    taomang(M , n);
    mangnguyento(M, m , n , count);
    cout<<count<<" " ;
    for (int i=0 ; i<count ; i++) {
        cout<<m[i]<<" ";
    }
}