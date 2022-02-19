#include<iostream>
using namespace std ; 

void taomang(int M [][100] , int n , int m) {
     for (int i=0 ; i<n ; i++) {
        for(int j= 0 ; j<m ; j++){
            cin>>M[i][j];
        }
        
    }
}
void doicho (int M[][100] , int n , int m , int a , int b , int K[]) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++){
            if (i==a-1) {
                K[j] = M[a-1][j];
                M[a-1][j] = M[b-1][j] ; 
            }
            if (i==b-1) {
                M[b-1][j] = K[j] ; 
            }

        }
    }
}
void inmang(int M[][100] , int n, int m){
    for (int i=0 ; i<n ; i++) {
        for(int j= 0 ; j<m ; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl ; 
    }
}

main () {
    int n , m ; cin>>n>>m ; 
    int M[100][100] ,K[m];
    taomang(M , n ,m) ; 
    int i ,j ; cin>>i>>j ; 
    int a = i<j?i:j ; int b= i>=j?i:j ; 
    doicho(M ,n,m,a,b,K) ; 
    inmang(M , n , m) ; 



}