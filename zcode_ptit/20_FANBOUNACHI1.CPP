#include<bits/stdc++.h>
using namespace std  ; 
const unsigned long long M = pow(10,9)+7;
main (){
    int t ; cin>>t ; 
    while (t--){
        int n  ; cin>> n  ; 
        long long f0 = 0 , f1 = 1; 
        if (n<2){
            cout<<n ; 
        } 
        else {    
            long long fn ; 
            for (int i=2 ; i<=n ; i++){
                fn = f0+f1 ; 
                fn=fn%M ; 
                f0=f1 ;
                f1=fn ; 
            }
            cout<<fn ; 

        }
         cout<<endl; 
    }


}
