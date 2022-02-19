#include<iostream>
using namespace std ; 
int cuoi(long n) {
  //  int sum =0 ;
    while(1) {
        while(1){
            int sum=0 ; 
            while (n>0) {
               sum += n%10 ; 
                n/=10 ; 
            }
         
        if (sum<10) {
            return sum ; 
        } else {
            n=sum ; 
        } 
        
    }
}
}

main () {
    int t ; cin>>t ; 
    while(t--) {
        long n; cin>> n ; 
        cout<<cuoi(n)<<endl ; 
    }
}