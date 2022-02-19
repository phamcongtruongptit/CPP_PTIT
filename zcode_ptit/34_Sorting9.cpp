#include<iostream>
using namespace std ; 
main(){
    int t ; cin>>t ; 
    while (t--) {
        int n,k ; cin>> n>> k  ; int M[n];
        for (int i=0 ; i< n ; i++) cin>>M[i] ; 
        int count = 0 ;      
        for (int i= 0 ; i<n-1 ; i++){
            for (int j=i+1 ; j<n ; j++) {
                if (M[i]+M[j] == k ) {
                    count ++ ; 
                }
            }
        }
        cout<<count<<endl ; 
    }
}