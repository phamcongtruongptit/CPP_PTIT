#include<iostream>
using namespace std ; 

void xoanocnguoc(int M[][100] , int n ) {
    int k= n*n ;  int trai =0, tren =0 , phai = n-1 , duoi = n-1 ; 
    while (k>=1) {
        for (int i = trai ; i<=phai ; i++) {
            M[tren][i] = k-- ;
        }
        tren ++ ; 
        for (int i=tren ; i<=duoi ; i++) {
            M[i][phai] = k-- ; 
        }
        phai --;
        if (duoi>=tren){
            for (int i=phai; i>=trai ; i--) {
                M[duoi][i] = k-- ; 
            }
            duoi -- ;
        }
        if (trai<=phai) {
            for(int i=duoi ; i>=tren ; i--) {
                M[i][trai] = k-- ;
            }
            trai ++ ;
        }
    }
}

void inmang(int M[][100] , int n){
    for (int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl; 
    }
}

main () {
    int n ; cin>> n ; 
    int M[100][100] ; 
    xoanocnguoc(M , n) ; 
    inmang(M , n );

}