#include<iostream>
#include<math.h>
using namespace std ; 
bool kiemtra (int n ) {
    if (n<=1) {return false;
    }
    for (int i=2 ; i<= sqrt(n) ; i++) {
        if (n%i==0) {
            return false ; 
        }
    }
    return true ; 
}
main () {
        int t ; cin>>t ; 
        while (t--) {
          int L , R , count=0  ; 
          cin>>L >>R ; 
          for (int i =L ; i<= R ; i++) {
              if(kiemtra(i)) {
                  count ++ ; 
              }
          }
          cout<<count ; 
        cout<<endl ; 
   }          
}