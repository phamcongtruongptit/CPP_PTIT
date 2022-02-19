#include<iostream>
using namespace std  ; 
void sort(int M[] , int n ) {
    for (int i=0 ; i< n-1 ; i++) {
        for (int j=i+1 ; j<n;j++) {
            if (M[i]>M[j]) {
                int tmp = M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}

main () {
    int t ; cin>>t ; 
    while(t-- ) {
        int n, min  ; cin>> n>>min ; int M[n][n] ;  int K[n*n] ; int x=0 ; 
            for(int i=0 ; i<n ; i++) {
                for (int j=0 ; j<n ; j++) {
                    cin>>M[i][j] ; 
                    K[x]= M[i][j] ; x++ ; 

                }
            }
            sort( K  ,  n*n ) ;
            cout<<K[min -1]<<endl ; 
        }
    
}