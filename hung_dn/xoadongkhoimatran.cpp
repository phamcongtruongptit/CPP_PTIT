#include<iostream>
using namespace std ; 
void taomang(int M[][100] , int n , int m) {
    for (int i=0 ; i<n ;i++){
        for (int j=0 ; j<m; j++){
            cin>>M[i][j] ;
        }   
    }
}

void inmang(int M[][100] , int n ,int m) {
     for (int i=0 ; i<n ;i++){
        for (int j=0 ; j<m; j++){
        cout<<M[i][j]<<" ";
        }   
        cout<<endl; 
    }
}

void xoahang (int M[][100] , int &n, int m, int k){
    for(int i=k-1 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            M[i][j] = M[i+1][j] ; 
        }
    }
    n-- ; 
}

main (){
    int n , m ; cin>>n >>m ; 
    int M[100][100] ; 
    taomang(M, n , m) ;  
    int k; cin>>k ; 
    xoahang(M , n , m,k) ; 
    inmang(M , n , m) ; 

}