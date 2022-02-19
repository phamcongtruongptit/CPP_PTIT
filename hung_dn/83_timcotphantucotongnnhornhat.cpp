#include<iostream>
using namespace std ; 
void taomang(int M[][100] , int  n ) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<n ; j++){
            cin>>M[i][j] ; 
        }
    }
}
void taoA(int M[][100] , int n , int A[]) {
    for (int  i = 0  ; i<n ; i++)  //duyet cot
    for (int j = 0 ; j<n ; j++) {
        A[i]+= M[j][i] ; 
    }
}
int timMin(int A[] , int n) {
    int min = A[0] ; 
    for (int i=1; i<n ; i++){
        if (A[i]<min) {
            min = A[i]  ; 

        }
    }
    return min  ; 
}

int timCot(int A[] , int n , int min){
    for (int i=0 ; i<n ; i++) {
        if (min == A[i]) {
            return i ; break  ;
        }
    }
}

main (){
    int n ; cin>>n  ; 
    int M[100][100] ; 
    int A[n] = {0 };
    taomang(M, n) ; 
    taoA(M,n,A) ; 
    cout<<timCot(A , n , timMin( A ,  n) ) +1 <<endl ; 
    for (int i=0 ; i<n ; i++){
        cout<<M[i][timCot(A , n , timMin( A ,  n) )]<<" ";
    }

}