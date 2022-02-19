#include<iostream>
using namespace std ; 

void taomang(int A[][100] , int n , int m) {
    for (int i = 0 ; i<n ; i++){
        for (int j=0 ; j< m ; j++){
            cin>>A[i][j] ;
        }
    }
} 
void tich(int M[][100] , int A[][100] , int B[][100] , int n , int m) {
    for (int k= 0 ; k<n ; k++) {
        for (int i=0 ; i<n ; i++) {
            for (int j=0 ; j<m ; j++){
                M[k][i] += A[k][j]*B[j][i] ;
            }
        }
    }
}

void inmang(int M[][100] , int n ) {
    for (int i = 0  ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cout<<M[i][j]<<" "; 
        }cout<<endl ; 
    }
}
main (){
    int n , m ; cin>>n>>m ; 
    int M[100][100] = {0}; 
    int A[100][100] , B[100][100] ; 
    taomang(A,n,m) ; taomang(B ,m,n) ; 
     tich(M , A ,B , n ,m) ; 
     inmang(M , n) ; 

}

// void tich(int a[][50], int b[][50], int c[][50], int hangA, int cotA, int cotB) {
// 	int i, j, l;
// 	for(i = 0; i < hangA; i++) {
// 		for(j = 0; j < cotB; j++) {
// 			for(l = 0; l < cotA; l++) {
// 				c[i][j] += a[i][l] * b[l][j];
// 			}
// 		}
// 	}
// }