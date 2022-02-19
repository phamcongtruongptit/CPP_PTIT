#include<iostream>
using namespace std ; 
void taomang(int M[][100]  , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++) {
            cin>>M[i][j] ; 
        }
    }
}



main () {
    int t ; cin>>t ; 
    while (t--) {
        int n ; cin>> n  ; 
        int M[100][100] ; 
        taomang(M , n) ; 
        for(int i=0; i<n ; i++) {
            for (int j=0 ; j<n ; j++) {
                if ( i>0 && i<n-1 && j>0 && j<n-1   ) {
                    cout<<" "<<" " ; 
                } else {
                    cout<<M[i][j]<<" " ; 
                }
                //cout<<endl ;
            }
            cout<<endl ; 
        }
        cout<<endl ; 
    }
}