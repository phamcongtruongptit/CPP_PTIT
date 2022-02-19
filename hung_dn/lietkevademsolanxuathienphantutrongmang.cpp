#include<iostream>
using namespace std ;
void taomang(int a[] , int n ) {
    for (int i= 0 ; i<n ; i++) {
        cin>>a[i];
    }
}

void mangb(int a[ ] ,int b[] , int n , int &m) {
    m = 0 ;
    b[m] = a[0] ;
    m++ ; 
    for (int i=1 ; i<n ; i ++) {
        bool kiemtra = true ; 
        for (int j= i-1 ; j>=0 ; j--) {
            if (a[j] == a[i]) {
                kiemtra = false ;
                break ;
            }
        }
        if (kiemtra == true) {
            b[m] = a[i] ;
            m++; 
        }
    }
}
void dem(int a[] , int b[] , int n, int m ) {
    for (int i=0 ; i<m ; i++) {
        int k = 0 ;
        for (int j = 0 ; j<n ; j++) {
            if (b[i] == a[j]) {
                k++;
            }
        }
        cout<<b[i]<<" "<<k<<endl ;
    }
}


int main ( int argc , char**argv) {
    int a[100] , b[100] ,n,m ;
    cin>>n ;
    taomang (a ,n) ;
   mangb(a,b,n,m) ;
//  for (int i= 0 ; i<m ; i++) {
//      cout<<b[i]<<" ";
//  }
dem (a,b,n,m) ;

    return 0;
}