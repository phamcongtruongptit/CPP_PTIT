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

void xoacot (int M[][100] , int n, int &m, int k){
    for(int j=k-1 ; j<m ; j++) {
        for (int i=0 ; i<n ; i++){
            M[i][j] = M[i][j+1] ; 
        }
    }
    m-- ; 
}

main (){
    int n , m ; cin>>n >>m ; 
    int M[100][100] ; 
    taomang(M, n , m) ;  
    int k; cin>>k ; 
    xoacot(M , n , m,k) ; 
    inmang(M , n , m) ; 

}