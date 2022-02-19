#include<bits/stdc++.h>
using namespace std ; 
main(){
    int t ; cin>>t ; 
    while(t--) {
        long long x , y  ; cin>>x>>y ; 
        long long p ; cin>> p ;
        long long a = pow(x,y) ; 
        long long b= a%p ; 
        cout<<b ; 
        cout<<endl ; //  
    }
}