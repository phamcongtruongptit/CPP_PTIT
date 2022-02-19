#include<iostream>
using namespace std  ; 
main () {
    int  t ; cin>>t  ; 
    while (t--) {
        int n ; cin>> n ; int A[n] , B[n] ; 
        for (int i=0 ; i<n ; i++) cin>>A[i] ; 
        for (int i=0 ; i< n ; i++) cin>>B[i] ; 
        for (int l=n  ; l>=1 ; l--) {
            bool t=true ;   
            for(int i=0 ; i<= n-l ; i++ ) {
               int suma=0 ,sumb=0  ;
                for (int j=i ; j<= i+l -1 ; j++) {
                    suma+=A[j] ; 
                    sumb+=B[j] ; 
                }
                 if (suma == sumb) {
                     t = false ; 
                cout<<l<<endl ; 
                break ; 
            }
            }
        if(t== false) break ; 
           
        }
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// void RangeQuery12() {
//     int n;
//     cin >> n;
//     int a[n],b[n];
//     for (int i=0; i < n; i++) cin >> a[i] ;
//     for (int i=0; i < n; i++) cin >> b[i] ;

//     for (int l=n; l >= 1; l--) {
//         for (int i=0; i <= n-l; i++){
//             int sum1=0, sum2=0;
//             for (int j=i; j <= i+l-1; j++){
//                 sum1 += a[j];
//                 sum2 += b[j];
//             }
//             if (sum1 == sum2) {
//                 cout << l << endl;
//                 return; 
//             }
//         }
//     }


//     return;
// }
// int main() {
//     int test;
//     cin >> test;
//     while (test--) {
//         RangeQuery12();
//     }
//     return 0;
// }