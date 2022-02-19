#include<iostream>
using namespace std  ; 

int cauhoi(int M[] , int L , int R) {
    int sum = 0 ; 
    for (int i=L-1 ; i<=R-1 ; i++) {
        sum+=M[i] ;
    }
    return sum ; 
}

main  () {
    int t ; cin>>t ; 
    while(t--) {
        int  n , k ; cin>>n >>k ;  int M[n];
        for (int i=0 ; i<n ; i ++) cin>>M[i] ; 
        for (int i=1 ; i<=k ; i++) {
            int L , R ; 
            cin>>L>>R ; 
            cout<<cauhoi(M , L,R) <<endl ; 
        }
        cout<<endl ; 
}
}