#include<iostream>
#include<math.h>
using namespace std ; 
void taomang (long long  M[] , int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>M[i]  ; 
    }
}

void sort(long long M[] , int n) {
    for (int i=0 ; i<n-1 ; i++) {
        for (int j =i+1 ; j<n ; j++) {
            if (M[i]> M[j]) {
                long long tmp = M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}

bool nto (long long n) {
    if (n == 1) {
        return false ; 
    }
    for (int i=2 ; i<=sqrt(n) ; i++) {
        if (n%i == 0) {
            return false; 
        }
    }
    return true; 
}

void mangphu (long long  M[] , long long b[] , int n , int &x) {
    x=0 ;
    for (int i= 0 ; i<n ; i++){
        bool kiemtra = true ; 
        for (int j= i-1 ; j>=0 ; j--) {
            if (M[i] == M[j]) {
                kiemtra = false ; 
                break ; 
            }
        }
        if (nto(M[i]) && kiemtra == true) {
            b[x] = M[i] ; 
            x++ ; 
        }
    }
    
}

void in(long long M[] , long long b[], int n, int x) {
    for (int i = 0 ; i<x ; i++) {
        int count = 0 ; 
        for (int j=0 ; j<n ; j++) {
            if (M[j] == b[i]) {
                count ++; 
            }
        }
        cout<<b[i]<<" "<<count<<endl ; 
    }
}


main () {
    int n ; cin>>n ; int x ;  
    long long M[100] ; 
    long long b[100] ; 
    taomang ( M , n ) ; 
    sort (M ,n );
    mangphu (M , b ,n ,x); 
    // for(int i = 0 ; i<x ; i++) {
    //     cout<<b[i]<<" " ;
    // }
    // cout<<endl; 
    in(M , b , n ,x ) ;
    
}