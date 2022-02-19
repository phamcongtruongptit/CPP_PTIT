#include<iostream>
using namespace std ; 
int n  , i , M[100] ; 
bool cauhinhcuoi = false ; 
void printf(){
    for(int j=1 ; j<=n ; j++) {
        cout<<M[j]<<" "; 
    }
    cout<<endl ; 
}

void sinh(){
    i=n ; 
    while( i!=0 && M[i] == 1 ) i-- ; 
    if(i==0) {
        cauhinhcuoi = true ; 
        return;
    }
    for(int j=i ; j<=n ; j++) {
        M[j] = 1- M[j] ; 
    }
    return ; 
}

main () {
    n = 4 ;
    for (int j=1 ; j<=n ; j++) M[j] = 0; 
    while(cauhinhcuoi == false ) {
      //  sinh() ; 
        printf() ;   // in cau hinh hien tai
        sinh() ; 
    } 
}




