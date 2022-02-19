#include<iostream>
using namespace std ; 

void sortmang(long M[] , int n) {
    for (int i=0 ; i<n-1 ; i++) {
        for (int j=i+1 ; j<n ; j++) {
            if (M[i]>M[j]) {
                long tmp = M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}

main () {
    int t ; cin>>t ; 
    while(t--) {
        int k , n ; cin>>k >> n ; long A[k][n] ; long B[n*k]  ; int s=0 ;
        for (int i=0 ; i< k ; i++) {
            for (int j=0 ; j<n ; j++) {
                cin>>A[i][j] ; 
                B[s] = A[i][j] ; s++ ;
            }
            cout<<endl ; 
        }
        sortmang(B , n* k ) ; 
        for (int i=0 ; i<n*k ; i++) cout<<B[i]<<" ";
        cout<<endl ; 
        

    }
}