#include<iostream>
using namespace std ; 
main () {
    int t ; cin>>t ; 
    while(t--) {
        int n ; cin>> n ;  int M[n] ; 
        for (int i=0 ; i<n ; i++) cin>>M[i] ;
        int x=1; 
        while (1) {
            bool kiem = true ;
            for (int i=0 ; i<n ; i++) {
                if (M[i] == x) {
                    kiem = false ; 
                    break ; 
                }
            }
            if(kiem == false ) {
                x++;
            } else {
                cout<<x<<endl ; 
                break ; 
            }
        } 
    }
}