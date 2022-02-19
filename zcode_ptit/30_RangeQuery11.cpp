#include<iostream>
using namespace std  ; 

void sort(int M[]  ,int n) {
    for (int i=0 ; i<n-1 ; i++) {
        for (int j=i+1 ; j<n ; j++){
            if (M[i]>M[j]) {
                int tmp = M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}

main (){
    int t ; cin>>t ; 
    while (t--){
        int n; cin>>n ; int M[n] ; 
        for (int i=0 ; i<n ; i++) {
            cin>>M[i] ; 
        }
        sort(M , n) ; 
        int min = M[1]-M[0] ; 
        for (int i=1 ; i<n-1 ; i++) {
            if (min > (M[i+1] - M[i]) ) {
                min = (M[i+1] - M[i]) ; 
            }
        }
        cout<<min<<endl ; 
    }

}