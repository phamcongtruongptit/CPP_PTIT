#include<iostream>
using namespace std ;

void KhoiTaoMang(int M[], int &n) {
    cin>>n ; 
    for (int i=0 ; i<n ; i++) {
        cin >> M[i];
    }
}
void DichKptusangphai (int M[] , int n, int k ) {
    for (int i = n-k ; i<n ; i++) {
        cout<<M[i]<<" "; 
    }
    for (int i=0 ; i<n-k ; i++) {
        cout<<M[i]<<" ";
    }
}

int main (int argc, char**argv) {
    int n=100, M[100] ;
    KhoiTaoMang(M, n); 
    int k ; 
    cin>> k ;
    DichKptusangphai(M,n,k) ;

 return 0;
}