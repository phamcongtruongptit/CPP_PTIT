#include<iostream>
using namespace std; 

bool kiemtra(int F[] , int M , int n) {
    for (int i = 0 ; i<=M ; i++) {
        if (n == F[i]) {
            return true ; 
        }
    }
    return false ; 
}
void inmanglongest (int A[] , int a , int F[] , int M ) {
    for(int i=0 ; i<a;i++) {
        if (kiemtra(F,M,A[i])) {
            cout<<A[i]<<" " ; 
        }
    }
}

main () {
    int M=16 ; int F[M] ; F[0] =0 ; F[1] = 1 ; 
    for (int i=2 ; i<=M ; i++) {
        F[i] = F[i-1] +F[i-2] ; 
    }


    int t ; cin>>t ; 
    while(t--) {
        int a ; cin>>a; int A[a] ; 
        for (int i=0 ; i<a ; i++) {
            cin>>A[i] ; 
        }
        inmanglongest(A,a,F,M) ; 
        cout<<endl ;        

    }
}