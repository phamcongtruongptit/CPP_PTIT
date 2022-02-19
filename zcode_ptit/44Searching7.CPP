#include<iostream>
using namespace std ; 
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
main (){
    int t ; cin>>t  ;  ; 
    while (t--) {
        int n , k ; cin>>n>> k   ; long M[n] ; 
        for (int i=0 ; i<n ; i++) cin>>M[i] ; 
        sort (M , n) ; 
        for (int i=n-1 ; i > n-1-k ; i--) {
            cout<<M[i]<<" ";
        }
        cout<<endl ; 
    }
}