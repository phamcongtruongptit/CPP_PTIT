#include<iostream>
using namespace std ; 

int check(int n)
{
    int t=2 ; int sum =0 ; 
    while (t--) {
        sum= sum*10 + n%10 ; 
        n/=10 ; 
    }
    if (sum == 68) {
        return 1 ;  
    } 
    else {
        return 0 ; 
    }
}
main () {
    int t; cin>>t ; 
    while (t-- ) {
        int n ; cin>>n ; 
        cout<< check(n) <<endl ; 
    }
}