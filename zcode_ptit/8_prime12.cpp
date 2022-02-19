#include<bits/stdc++.h>
using namespace std;
main () {
    int t ; cin>>t ;
    while (t--) {
        long long n  ; cin>>n; long  s ; cin>>s ; long M[10000] = {0} ;  long k=0 ; // khai bao mang de nhet i vao
        for (int i=2 ; i<= sqrt (n) ; i++) {
            while (n%i == 0) {
                M[k] = i ; 
                k++ ;  // tang gia tri cua k de gan lan tiep theo
                n/=i ;
                if (n==1) {
                    k--;
                }  
            }
        } 
        if (n!=1) {
           // k--;
            M[k] =n ;
        }
        
        if (M[s-1] != 0) {
            cout<<M[s-1]; 
        } else {
            cout<<-1 ;
        }

        cout<<endl; 
    }
}