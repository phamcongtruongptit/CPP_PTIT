#include<iostream>
#include<math.h>
using namespace std ; 
void taomang(int M[100][100] , int n) {
    for (int i= 0 ; i<n ; i++) {
        for (int j =  0 ; j<n ; j++) {
            cin >>M[i][j];
        }
    }
}
bool nguyento (int n ) {
    if (n==1) {
        return false;
    } 
    for (int i=2 ; i<= sqrt (n) ; i++) {
        if (n%i ==0) {
            return false ; 
        }
    }
    return true; 
}
int count (int M[100][100] , int n ) {
    int count  = 0 ; 
    for (int i= 0 ; i<n ; i++) {
        for (int j =0 ; j<n ; j++) {
            if (i == j || ((i+j) == n-1 )) {
                if(nguyento(M[i][j])) {
                    count ++ ; 
                }

            }
        }
    }
    return count; 
}
main () {
    int n ; cin>>n ; 
    int M[100][100] ; 
    taomang(M , n ) ; 
    cout<<count(M, n); 
}