#include<bits/stdc++.h>
using namespace std;
//const long long M = pow

void taomang(long n , long M[]) {
    for (long i=0 ; i<n ; i++) {
        cin>>M[i] ; 
    }
}

long M[10000000] ;

main (){
    int t ; cin>>t ; 
    while (t -- ) {
        long n ; cin>> n ; cout<<endl ;   
        taomang(n ,M ) ;
        long max = M[0] ; 
        for (long i=0 ; i < n ; i++) {
            if (max < M[i]) {
                max = M[i] ; 
            }
        }
        cout<<max<<endl ; 
    }
}




