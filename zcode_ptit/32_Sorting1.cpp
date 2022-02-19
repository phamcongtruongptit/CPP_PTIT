#include<iostream>
using namespace std; 
void sort(int M[] , int n){
    for (int i=0 ; i<n-1 ; i++) {
        for (int j=i+1 ; j< n ; j++) {
            if (M[i]>M[j]) {
                int tmp = M[i] ; 
                M[i] = M[j] ; 
                M[j] = tmp ; 
            }
        }
    }
}

main(){
    int t ; cin>>t ; 
    while (t--){
        int n; cin>> n ; int M[n] ; 
        for(int i=0 ; i<n ; i++) cin>>M[i] ; 
       sort(M  , n)  ; 
        for (int i= 0 ; i<=n-1 ; i++) {
            if (i==(n-1-i))  {
                cout<<M[i]; 
                break ; 
            } 
            if (i>(n-1-i)) break ; 
            cout<<M[n-1-i]<<" "<<M[i]<<" ";
        }
        cout<<endl  ; 
    }
}