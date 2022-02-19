#include<bits/stdc++.h>
using namespace std ; 
main() {
    int t; cin>>t ; 
    while(t--) {
        long long a ,x,y ; 
        cin>>a>>x>>y ; 
        long long t=a ;
        long long k=a ;  
        int s= __gcd(x , y) ;  int count = 0 ; 
        while (k>0) {
            k/=10 ; 
            count++ ; 
        }
        // while (s--) {
        //     cout<<a;
        // }
        // cout<<count<<endl ; 
        // cout<<t<<endl ; ; 
        if (s==1) {
            cout<<t ; 
        } else {
            
            while (s> 0 ) {
                cout<<t; 
                s-- ; 
            }
           // cout<<a ; 
        }


        cout<<endl ; 
    }
}