#include<iostream>
using namespace std ; 
main() {
    int t ; cin>>t ; 
    while (t--) {
        long n ; cin>> n; long M[n]  ; long B[n] ;
        for (long i=0 ; i<n ; i++) cin>>M[i] ; 
        for (long i=0 ; i<n ; i++) B[i] = -1 ; 

       for (long i=0 ; i<n ; i++) {
          // bool kiemtra = true ; 
            for (long j=0 ; j<n ; j++) {
                if (M[j] == i) {
                    B[i] = M[j] ; 
                  //  kiemtra = false ; 
                    break ; 
                }
            }
          //  if (kiemtra == true) M[i] = -1 ; 
       }

        for (long  i = 0 ; i<n ; i++) cout<<B[i]<<" ";
        cout<<endl  ; 
    }
}