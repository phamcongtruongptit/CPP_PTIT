#include<iostream>
using namespace std ;  
void KhoiTaoMang(int M[ ], int &n) {
    cin>>n ; 
    for(int i=0 ; i<n ; i++) {
        cin>> M[i];
    }
}
void timMinMAx (int M[],int n, int &min , int &max) {
    for (int i=0 ; i<n ; i++) {
        if (M[i]<min) {
            min = M[i];
        }
        if (M[i]>max) {
            max = M[i] ;

        }
    }
}
void HienThi (int M[] , int n , int min , int max) {
    for (int i=n-1 ; i>=0 ; i--) {
        if (M[i]== max) {
            cout <<max<< " "<<i+1<<endl; 
            break ;
        }
    }
    for (int i=n-1 ; i>=0 ; i--) {
        if (M[i]== min) {
            cout <<min<< " "<<i+1<<endl; 
            break ;
        }
    }
}


int main ( int argc, char**argv) {
    int n=100; 
    int M[100] ; 
    KhoiTaoMang(M, n) ;
    int max = M[0] ; 
    int min = max ;
    timMinMAx(M,n, min ,max);
    HienThi(M, n,min, max);

    return  0;
}