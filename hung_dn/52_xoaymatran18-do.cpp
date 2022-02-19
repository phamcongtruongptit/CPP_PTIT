#include<iostream>
using namespace std ; 
void taomang(int M[][100] , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++) {
            cin>>M[i][j] ; 
        }
    }
} 

void xoaymang(int M[][100] , int n) {
    for (int j=n-1 ; j>=0 ; j--) {
        for (int i= n-1 ; i>=0 ; i--) {
            cout<<M[j][i]<<" ";
        }
        cout<<endl ; 
    }
}
main(){
    int n  ; cin>> n ; 
    int M[100][100] ; 
    taomang( M , n) ; 
    xoaymang(M , n ) ; 
}