#include<bits/stdc++.h>
using namespace std ; 
void taomang(int n  , int M[]) {
    for (int i= 0 ; i<n ; i++) {
        cin>>M[i] ; 
    }
}
main (){
    int t; cin>>t ; 
    while (t--) {
        int n ; cin>> n; int M[100000] ; cout<<endl ; 
        taomang( n , M) ;
        int max = M[0] ; 
        for (int i=1 ; i<n ; i++) {
            if (max < M[i]) {
                max = M[i] ; 
            }

        }   
        cout<<max<<endl ;      
    }
}