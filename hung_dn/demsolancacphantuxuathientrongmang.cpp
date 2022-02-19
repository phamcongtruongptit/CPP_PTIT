#include<iostream>
using namespace std ; 

void createarr(int m[] ,int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>m[i]; 
    }

} 

void taomangchuaptuphanbien(int m[] ,int b[] ,int n, int &x) {
    x=0 ;
    b[x]= m[0] ;
    x++ ;
   
    for (int i=1 ; i<n ; i++) {
         bool kiemtra = true  ; 
        for (int j= i-1; j>= 0 ; j--) {
            if (m[j]==m[i]) {
                kiemtra= false ;
                break ;
            }
           
        }
         if (kiemtra == true ) {
                b[x] = m[i] ; 
                x++; 
            }
    }

}

void intmangphanbiet(int b[] , int x) {
    for (int i=0 ; i<x ; i++) {
            cout<<b[i]<<" " ;
    }
}

int main ( int argc, char**argv) {
    int m[100];
    int n;
    cin>>n ; 
    int b[100], x ; 
    createarr(m,n);
    taomangchuaptuphanbien(m,b,n,x) ;
    intmangphanbiet(b,x);
    return 0;
}