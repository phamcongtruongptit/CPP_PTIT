#include<iostream>
using namespace std ; 
main ( ) {
    int t ; cin>>t ; 
    while (t--) {
        long  n ; cin>> n ; long M[n] ; 
        for (int i=0 ; i< n ; i++)  cin>>M[i] ; 
        long min  = M[0]  ; long max = min ; 
        for (long i= 1 ; i<n ; i++) {
            if (min> M[i]) {
                min = M[i] ; 
            }
            if (max< M[i]) {
                max = M[i] ; 
            }
        }
         int min2= max  ; 
        for (long i= 0 ; i<n ; i++) {
            if (min2 > M[i] && (min != M[i])) {
                min2 = M[i] ; 
            }
        }
       if (min != min2 ) {
            cout<<min<<" "<<min2<<endl ; 
        } else {
            cout<<-1<<endl ; 
        }
 // cout<<min2 ; 
    }
}