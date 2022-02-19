#include<iostream>
using namespace std ;

void taomang(int a[][100] , int n , int m) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            cin>>a[i][j] ; 
        }
    }
}

void chuyenvi (int A[][100] , int a[][100] , int n , int m) {
    for (int i = 0 ; i<n ; i++){
        for (int j= 0 ; j<m ;j++) {
            a[j][i] = A[i][j] ; 
        }
    }
}

void tich(int K[][100] , int A[][100] , int a[100][100] , int n , int m) {
    for (int i=0 ; i<n ; i++) { //duyet hang cua K
        for (int j=0 ; j<n  ; j++) { //duyethangcuacot //
            for (int k=0 ; k< m ; k++) {
                K[i][j] += A[i][k]*a[k][j];
            }
        }
    }
}

void inmang(int M[][100] , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j= 0 ; j<n ; j++) {
            cout<<M[i][j]<<" " ; 
        }
        cout<<endl ; 
    }
}



main () {
    int n , m ; cin>>n>>m;
    int A[100][100] , a[100][100] , K[100][100]={0} ; 
    taomang(A,n,m) ;
    chuyenvi(A ,a ,n ,m) ;
    tich(K,A ,a ,n, m) ;
    inmang(K , n) ; 


    
}