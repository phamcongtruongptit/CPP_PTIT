#include<iostream>
#include<math.h>
using namespace std ; 

bool  nguyento(int n) {
    if (n<=1) {
        return false ;
    } 
    for (int i= 2 ; i<= sqrt(n) ; i++) {
        if (n%i ==0 ) {
            return false ;
        }
    }
    return true ; 
} 

void mangnguyento(int A [] , int n) {
    int count =0;
    
    for (int j=2 ; count < n*n  ; j++) {
        if (nguyento(j)) {
            A[count] = j ; 
            count++ ;  
        }
    }
}
void inmang(int M[][100] , int n) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<M[i][j]<<" " ;

        }
        cout<<endl  ;
    }
}

void inmanga(int M[] , int n) {
    for (int i=0 ; i<n*n ; i++){
       cout<<M[i]<<" ";
}
}

void xoanoc (int M[][100] , int n , int A[]  ) {
    int k=1 ; int count  = 0 ; 
    int trai = 0 ,tren = 0  , phai = n-1 , duoi = n-1   ;
    while (count<n*n) {
        for (int i = trai ; i<=phai ; i++) {
            M[tren][i] = A[count]  ; count++ ; 
        }
        tren ++ ; 
        for (int i=tren ; i<=duoi ; i++){
            M[i][phai] = A[count]  ; count++ ; 
        }
        phai -- ; 
         if(duoi>=tren) {
        for (int i=phai ; i>= trai ; i-- ) {
            M[duoi][i] = A[count]  ; count++ ; 
        }
        duoi -- ; 
    }
    if (phai>=trai) {
        for (int i=duoi  ; i>= tren ; i-- ) {
            M[i ][trai] = A[count]  ; count++ ; 
        }
        trai ++ ; 
    }
    }
   
}


main() {
    int n  ;cin>>n ; 
    int M[100][100] , A[100] ;
    mangnguyento(A , n);
  //  inmanga( A ,  n);
   xoanoc(M, n ,A) ;
   inmang(M , n) ;  

}