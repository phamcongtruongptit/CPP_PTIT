#include<bits/stdc++.h>
using namespace std ;
bool nguyento(int n){
    if (n<=1){
        return false ; 
    }
    for (int i=2 ; i<=sqrt (n) ; i++) {
        if (n%i == 0) {
            return false ; 
        }
     
    }
       return true  ; 
}

main (){
    int t ; cin>>t ; 
    while (t--) {
        long long n ; cin>> n ;
        for (int i=1 ; i<=sqrt (n) ; i++){
            if (nguyento(i)) {
                cout<<i*i<< " "; 
            }
        }
        cout<<endl ; 
    }
}