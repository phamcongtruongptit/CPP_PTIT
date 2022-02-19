#include<iostream>
using namespace std  ; 
void taomang(int M[][100] , int n , int k[]) {
    for (int i=0 ; i< n ; i++){
        for (int j = 0 ; j<n ; j++) {
            cin>>M[i][j] ; 
            if(i==j) {
                k[i] = M[i][j];
             
            }
        }
    }
}
void doiduongcheo (int M[][100] , int n , int k[]) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++) {
            if(i+j == n-1) {
                M[i][i] = M[i][j] ; 
                M[i][j] = k[i] ; 
            }
        }
    }
}

void inmang(int K[][100] , int n){
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++){
            cout<<K[i][j]<<" ";
        }
        cout<<endl; 
    }
}

main(){
    int n; cin>>n  ; 
    int M[100][100] ; int K[n] ; 
    taomang(M , n , K)  ;
    doiduongcheo(M,n,K) ; 
    inmang(M, n) ; 

}