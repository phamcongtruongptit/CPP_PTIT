#include<iostream>
using namespace std ; 
int  M[100] ,  n ,  i ; 
bool cauhinhcuoi = false ; 
void printf() {
    for (int i=1 ; i<=n;  i++) cout<<M[i]<<" " ; 
    cout<<endl ; 
}

void sinhhoanvi() {
    i= n-1 ; 
    while(i>0 && M[i]>=M[i+1]) i-- ; 
    if (i==0) {
        cauhinhcuoi = true ; return ; 
    }
    int k=n ; 
    while(M[k]<=M[i]) k-- ; 
    int tmp = M[k] ; M[k] = M[i] ; M[i] = tmp ; 
    int l=i+1, r=n ; 
    while(l<=r) {
        int tmp = M[l] ; M[l] = M[r] ; M[r] = tmp ; l++ ; r-- ; 
    }
    return ; 
}

main() {
    n= 5 ; 
    for (int i=1 ; i<=n ; i++) M[i] = i ; 
    while(cauhinhcuoi == false ) {
        printf() ; 
        sinhhoanvi() ; 
    }

}