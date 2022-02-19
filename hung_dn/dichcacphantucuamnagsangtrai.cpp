#include<iostream>
using namespace std ; 
void KhoiTaoMang(int M[ ], int &n) {
    cin>>n ; 
    for (int i=0 ; i<n; i++) {
        cin>>M[i];
    }
}
// void DichMangsangtrai(int M[] , int n , int &k ) {
//     cin>>k ;
//     for (int i=k; i<n; i++){
//         cout << M[i]<<" ";
//     }
//     for (int i= 0 ; i<k ; i++){
//         cout<<M[i]<<" " ;
//     }
// }
int main (int argc, char**argv) {
    int n= 100 ; 
    int M[100] ;
    KhoiTaoMang(M,n);
    // int k;
    // DichMangsangtrai(M, n,k );
    return 0;
}