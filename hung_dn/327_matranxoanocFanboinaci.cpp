#include<iostream>
using namespace std ; 
void Funboi(int M[] , int n) {
    M[0] = 0 ; M[1] = 1 ; 
    for (int i=2 ; i<n*n ; i++ ) {
        M[i] = M [0]+ M[1]; 
        M[0] = M[1] ; 
        M[1] = M[i] ; 
    }
    M[0] =0 ; M[1] =1 ; 
}

// void aaa(int M[] , int n) {
//     for (int i=0 ; i<n*n ; i++) {
//         cout<<M[i]<<"  " ; 
//     }
// }
void xoanoc(int M[][100] , int A[] , int n) {
    int count =0 ; int trai = 0 , tren = 0 , phai = n-1  ,duoi = n-1; 
    while (count<n*n) {
        for (int i=trai ; i<= phai ; i++){
            M[tren][i] = A[count++] ; 
        }
        tren++ ; 
        for (int i=tren ; i<=duoi ; i++){
            M[i][phai] = A[count++] ; 
        }
        phai -- ; 
        if (duoi>=tren) {
            for(int i=phai ; i>= trai ; i--) {
                M[duoi][i] = A[count++] ; 
            }
            duoi -- ;
        }
        if (trai<=phai) {
            for (int i=duoi ; i>= tren ; i--) {
                M[i][trai] = A[count++];
            }
            trai ++ ; 
        }
    }
}   

void inmang (int M[][100] , int n) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl ; 
    }
}


main () {
    int n ; cin>> n ; 
    int M[100][100]  ; 
    int A[100] ; 
    Funboi(A , n) ; 
    xoanoc(M,A , n) ; 
    // aaa(A , n) ; 
    inmang(M , n) ; 
}