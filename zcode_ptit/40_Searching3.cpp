/*
#include<iostream>
using namespace std  ;

void sort(long M[] , long n){
    for (long i=0 ; i<n-1 ; i++){
        for (long j=i+1 ; j< n ; j++) {
            if (M[i]>M[j]) {
                long tmp = M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}
long M[10000000] ;

main () {
    int t; cin>>t  ; 
    while (t-- ) {
        long n ; cin>> n ; // long M[n] ; 
        for(long i=0 ; i<n-1 ; i++) cin>>M[i] ; 
        sort(M , n) ; 
        long a = M[0] ; 
        for (long i=0 ; i<n ; i++){
            if (a == M[i]) {
                a++ ; 
            } else {
                cout<<a<<endl ; 
                break ; 
            }
          //  cout<<M[i]<<" " ; 
        }
         
    }
} */ // CACH 1:
// Cach 2
#include<iostream>
using namespace std ; 
main (){
    int t; cin>>t ; 
    while (t-- ){
        long n ; cin>> n ; long M[n-1] ; 
        for (long i=0 ; i<n-1 ; i++) cin>>M[i] ; 
        long x=1 ; 
        while (1) {
            bool kiem = true ; 
            for (long i=0 ; i<n-1 ; i++) {
                if (M[i] == x) {
                    kiem = false ; 
                    break ; 
                }
            }
            if (kiem == false ){
                x++ ; 
            } else {
                cout<<x<<endl ; 
                break ; 
            }
        }
 }
}