#include<iostream>
using namespace std ; 
void sort(long n , long M[]) {
    for (long i=0 ; i<n-1 ; i++) {
        for (long j=i+1 ; j<n ; j++) {
            if (M[i]>M[j]) {
                long tmp =M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}

main() {
    int t ; cin>>t ; 
    while(t--) {
        long a , b ; cin>>a>>b ; 
        long A[a] , B[b] , C[a+b] ; 
        for (int i=0 ; i<a ; i++) cin>>A[i] ; 
        for (int i=0 ; i<b ; i++)  cin>>B[i] ; 
        for (int i=0 ; i<a+b ; i++) {
            if(i<a ) {
                C[i] = A[i] ; 
            }
            if (i>= a ) {
                C[i] = B[i-a];
            }
        }
        sort (a+b   ,C ) ; 
        for (int i=0 ; i<a+b ; i++){
            cout<<C[i]<<" " ; 
        }
        cout<<endl ; 
    }
}
