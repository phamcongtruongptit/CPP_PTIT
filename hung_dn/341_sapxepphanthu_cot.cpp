#include<iostream>
using namespace std ; 
void taomang(int M[][100] , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++) {
            cin>>M[i][j] ; 
        }
    }
}

void sortcot(int M[][100] , int n) {
    for (int j=0 ; j<n ; j++) {
        for (int a = 0 ; a<n-1 ; a++) {
            for (int b = a+1 ; b<n ; b++) {
                if (M[a][j]<M[b][j]) {
                    int tmp = M[a][j] ; 
                    M[a][j] = M[b][j]; 
                    M[b][j] = tmp ; 
                }
            }
        }
    }
}

void inmang(int M[][100] , int n) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<n ; j++) {
            cout<<M[i][j]<<" " ; 
        }
        cout<<endl ;
    }
}

main () {
    int n ; cin>>n ; 
    int M[100][100] ; 
    taomang(M , n);
    sortcot(M , n) ; 
    inmang(M , n);
}