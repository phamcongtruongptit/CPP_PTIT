#include<bits/stdc++.h>
using namespace std  ; 
void taomang( int n , int M[]) {
    for (int i=0 ; i<n ; i++) {
        cin>>M[i] ; 
    }
}

void sapxep(int n , int M[]) {
    for (int i=0 ; i<n-1 ; i++) {
        for (int j=i+1 ; j<n ; j++) {
            if (M[i]>M[j]){
                int tmp = M[i] ; 
                M[i] = M[j] ; 
                
                M[j] = tmp ; 
            }
        }
    }
}

main (){
    int t ; cin>>t ; 
    while (t-- ){
        int n , k ; cin>> n>> k  ; cout<<endl ; 
        int M[100000] ; 
        taomang(n ,M) ; 
        sapxep( n ,M) ; 
        cout<<M[k-1]<<endl ; 

    }
}