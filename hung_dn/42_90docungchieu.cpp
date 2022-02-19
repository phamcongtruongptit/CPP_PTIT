#include<iostream>
using namespace std  ; 
void taomang(int M[][100] , int n) {
    for(int i =0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>M[i][j] ; 
        }
    }
}
void xoay (int M[][100] , int n) {
    for (int i= 0 ; i<n ; i++){
        for (int j=n-1 ; j>=0 ; j--){
            cout<<M[j][i]<<" " ;
        }
        cout<<endl ; 
    }
}
main () {
    int n; cin>> n ; 
    int M[100][100] ; 
    taomang(M , n) ; 
    xoay(M , n) ; 
}