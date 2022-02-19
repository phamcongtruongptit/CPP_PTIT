#include<iostream>
using namespace std; 

void taomang ( int a[100] ,int n ){
    for (int i =0 ; i<n; i++) {
        cin>>a[i];
    }
}

void mangphanbiet(int a[100], int b[100], int n , int &m){
    m=0 ; 
    b[m] = a[0];
    m++; 
    for (int i=1 ; i<n ; i++) {
        bool kiemtra = true ;
        for (int j=i-1 ; j>=0 ; j-- ) {
            if (a[i] == a[j]) {
                kiemtra = false ;
                break ;
            }
        }
        if( kiemtra==true) {
            b[m] = a[i];
            m++;
        }
    }
}

void xuatptu(int a[] , int b[] ,int n ,int m) {
    for ( int i =0 ; i<m ; i++) {
        int count = 0 ;
        for ( int j=0 ; j<n ; j++) {
            if ( a[j] == b[i]) {
                count ++ ;
            }
        }
        if (count >1) {
            cout<<b[i]<<" ";
        }
    }
}

int main (int argc , char**argv) {
    int a[100], b[100], n,m ;
    cin>>n ;
    taomang(a,n);
 mangphanbiet(a,b,n,m);
//   for (int i =0 ; i<m; i++) {
//         cout<<b[i];
//     }
    xuatptu(a,b,n,m);
    return 0;
}