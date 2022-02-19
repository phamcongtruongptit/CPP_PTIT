#include<bits/stdc++.h>
using namespace std ;
// void taomang(int M[][100] , int n) {
//     for (int i=0 ; i<n ; i ++){
//         for (int j=0 ; j<n ; j++) {
//             cin>>M[i][j] ;
//         }
//     }
// }
void inmang(int M[][100] , int n , int m) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout<<M[i][j]<<" " ;

        }
        cout<<endl  ;
    }
}
void xoanoc (int M[][100] , int n , int m  ) {
    int k=1 ;
    int trai = 0 ,tren = 0  , phai = m-1 , duoi = n-1   ;
    while (k<=m*n) {
        for (int i = trai ; i<=phai ; i++) {
            M[tren][i] = k++ ; 
        }
        tren ++ ; 
        for (int i=tren ; i<=duoi ; i++){
            M[i][phai] = k++  ; 
        }
        phai -- ; 
         if(duoi>=tren) {
        for (int i=phai ; i>= trai ; i-- ) {
            M[duoi][i] = k++ ; 
        }
        duoi -- ; 
    }
    if (phai>=trai) {
        for (int i=duoi  ; i>= tren ; i-- ) {
            M[i ][trai] = k++ ; 
        }
        trai ++ ; 
    }
    }
   
}
main (){
    int n, m ; cin>>n >>m ; 
    int M[100][100] ; 
 //   taomang(M , n) ; 
    xoanoc (M , n , m) ; 
    inmang(M , n , m) ; 
}