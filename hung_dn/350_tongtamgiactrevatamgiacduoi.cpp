#include<bits/stdc++.h>
using namespace std ; 
void taomang( int M[100][100] , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j= 0 ; j<n ; j++) {
            cin>>M[i][j];
        }
    }
}
 int sumtren (int M[100][100] , int n ) {
     int sumtren = 0 ;
     for (int i=0 ; i<n ; i++) {
         for (int j = i+1 ; j<n ; j++) {
             sumtren+=M[i][j];
         }
     }
     return sumtren ; 
 }

 int sumduoi (int M[100][100] , int n) {
     int sumduoi = 0  ; 
     for (int j= 0 ; j<n ; j++) {
         for (int i = j+1 ; i<n ; i++) {
             sumduoi +=M[i][j];
         }
     }
     return sumduoi ; 
 }


main () {
    int n; cin>>n ;
     int M[100][100] ;
     taomang( M , n); 
     cout<<sumtren(M ,n)<<" "<<sumduoi(M, n) ;
}