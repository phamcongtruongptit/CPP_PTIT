#include<iostream>
#include<math.h>
using namespace std  ;
bool nguyento(int n) {
    if(n==1) {
        return false ; 
}
    for (int i=2 ;i<=sqrt(n) ; i++) {
        if (n%i==0) {
            return false ; 
    }
    }
    return true; 
} 
main () {
    int t ; cin>>t ; 
    while (t--) {
        long n ; cin>>n ; int count = 0 ; 
        for (int i=2 ; i<=sqrt(n) ; i++) {
            if(nguyento(i)) {
                count++ ; 
            }
        }
        cout<<count<<endl ; 
    }
}