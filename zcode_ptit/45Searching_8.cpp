#include<iostream>
using namespace std ; 
main (){
    int t ; cin>>t ; 
    while (t--){
        int n ; long k ; cin>>n>>k ; 
        long M[n] ; 
        for (int i=0 ; i<n ; i++) cin>>M[i] ; 
        int count  = 0 ; 
        for (int i= 0 ; i<n ; i++){
            if (M[i] == k) {
                count++ ; 
            }
        }
        if (count ==0) {
            cout<<-1 <<endl ; 
        } else {
            cout <<count<<endl ; 
        }
    }
}