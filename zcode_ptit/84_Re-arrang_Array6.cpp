#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t ; 
    while (t--) {
        int n ; cin>> n ; int M[n] ; 
        for (int i= 0 ; i<n ; i++) cin>>M[i] ; 
        for (int i= 0 ; i<=n-2 ; i++) {
            if ( M[i+1] != 0 && M[i] == M[i+1] ) {
                M[i] = 2*M[i] ; 
                M[i+1] = 0 ; 
            }
        } 

      //  for (int i=0 ; i<n ; i++) cout<<M[i]<<" " ; 
        int count =0 ; 
        for (int i = 0 ; i<n ; i++) {
            if (M[i]!=0  ) {
                cout<<M[i]<<" ";
                count++ ; 
            }
        }
        for (int i=1 ; i<=n-count ; i++) {
            cout<<0<<" " ; 
        }
        cout<<endl ; 
    }
}