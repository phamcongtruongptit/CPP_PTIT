#include<bits/stdc++.h>
using namespace std ;

void inmang(int M[][100] , int n) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<M[i][j]<<" " ;

        }
        cout<<endl  ;
    }
}
void xoanoc (int M[][100] , int n  ) {
    int k=1 ;
    int trai = 0 ,tren = 0  , phai = n-1 , duoi = n-1   ;
    while (k<=n*n) {
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
    int n ; cin>>n ; 
    int M[100][100] ; 
 //   taomang(M , n) ; 
    xoanoc (M , n) ; 
    inmang(M , n) ; 
}