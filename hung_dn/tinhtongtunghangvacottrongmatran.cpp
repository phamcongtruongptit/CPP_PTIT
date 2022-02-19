#include<iostream>
using namespace std ; 

void taomang(int M[][100] , int n){
for (int i = 0 ; i<n ; i++) {
        for (int j = 0 ; j<n ; j++) {
            cin>>M[i][j] ; 
        }
    }
}
    
void hang(int M[][100] , int H[] , int n ) {
    for (int i = 0 ; i<n ; i++) { // duyet hang
    H[i] = 0 ; 
        for (int j = 0 ; j<n ; j++) {
            H[i]+= M[i][j] ; 
        }
    }
}
void cot(int M[][100] , int H[] , int n ) {
    for (int j = 0 ; j<n ; j++) { // duyet cot
    H[j] = 0 ; 
        for (int i = 0 ; i<n ; i++) {
            H[j]+= M[i][j] ; 
        }
    }
}
 
 void in(int M[] , int n ) {
     for (int i=0 ; i<n ; i++) {
         cout<<M[i]<<" ";
     }
 }
main () {
    int n ; cin>>n ; 
    int M[100][100]  , H[100] , C[100] ; 
    taomang(M , n) ; 
    hang(M,H,n) ; 
    cot(M , C  , n ) ; 
    in(H , n) ; 
    cout<<endl ;
    in(C, n); 
    

}