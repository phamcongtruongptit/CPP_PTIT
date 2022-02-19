#include<iostream>
using namespace std  ; 
main (){
    int t ; cin>>t ; 
    while (t--) {
        long a , b ; cin>>a>>b ; 
        long A[a] , B[b] ;
        for (int i=0 ; i<a ; i++) cin>>A[i] ; 
        for(int i= 0 ; i<b ; i++) cin>>B[i] ; 
        long max = A[0] ; 
        for (int i=1 ; i<a ; i++) {
            if (max<A[i]) {
                max = A[i] ; 
            }
        }
        long min = B[0] ; 
        for (int i=1 ; i<b ; i++) {
            if (min> B[i]) {
                min = B[i] ; 
            }
        }
        cout<<min*max<<endl ; 

    }
}