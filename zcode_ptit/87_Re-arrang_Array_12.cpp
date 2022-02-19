#include<iostream>
using namespace std  ; 
main () {
    int t ; cin>>t ; 
    while (t--) {
        int n ; cin>>n ; int M[n] ; 
        for (int i=0 ; i<n ; i++) cin>>M[i] ; 
        long  max = 0 ; long tich=1  ; 
        for (int l=n ; l>=1 ; l--) {
            for (int i=0 ; i<=n-l ; i++) {
                  tich = 1 ;
                for (int j=i ; j<=i+l-1 ; j++) {
                    tich=tich*M[j]; 
                }
                if(tich > max ) {
                    max = tich  ; 
                }
              
            }
             
        }
        cout<<max<<endl ; 
    }
}