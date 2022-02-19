#include<iostream>
using namespace std ; 
int n , i , k , M[100] ; 
bool cauhinhcuoi = false ; 
void printf(){
    for (int i=1 ; i<=k ; i++) cout<<M[i]<<" " ; 
    cout<<endl ; 
}
void sinhtohop(){
    i= k ; 
    while(i!=0 && M[i]==n-k+i) i-- ; 
    if(i==0){
        cauhinhcuoi = true ; 
        return  ; 
    }
    M[i] = M[i]+1 ; 
    for (int j=i+1 ; j<=k ; j++) M[j]  = M[i] + (j-i) ; 
    return ; 
}
main() {
    n = 5 ; k=3 ; 
    for (int i=1 ; i<=k ; i++) M[i] = i ; 
    while(cauhinhcuoi == false ) {
        printf() ; 
        sinhtohop() ; 
    }
}

