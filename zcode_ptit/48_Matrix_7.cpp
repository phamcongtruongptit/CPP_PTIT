#include<iostream>
using namespace std; 

void taomang(int M [][100] , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++) {
            cin>>M[i][j] ; 
        }
    }
}
main () { 
    int t ; cin>>t ; 
    while(t--) {
        int n ; cin>> n ;  int M[100][100] ; 
        taomang(M , n ) ; 
        for (int i=0 ; i<n ; i++) {
            if (i%2 == 0 ) {
                int j=0 ; 
                while(j<n) {
                    cout<<M[i][j]<<" ";
                    j++ ; 
                }
               // cout<<endl ; 
            } else {
                int j=n-1 ; 
                while(j>=0) {
                    cout<<M[i][j]<<" ";
                    j-- ; 
                }
               // cout<<endl ; 
            }

        }
        cout<<endl ; 
    }

}