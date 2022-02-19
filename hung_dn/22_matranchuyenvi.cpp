#include<iostream>
using namespace std ; 
void taomang(int M[][100] , int n) {
    for (int i = 0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++) {
            cin>>M[i][j] ; 
        }
    }
}

void chuyenvi( int M[][100] , int m[][100] , int n) {
    for (int i= 0 ; i<n ; i++) {
        for (int j= 0 ;j<n ; j++){
            m[j][i] = M[i][j] ; 
        }
    }
}

void inmang (int M[100][100] , int n) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl ; 
    }
}
main (){
    int n ; cin>>n ; 
    int M[100][100]  , m[100][100];
    taomang(M, n ) ; 
    chuyenvi(M , m , n) ; 
    inmang(m , n) ; 
     
        }