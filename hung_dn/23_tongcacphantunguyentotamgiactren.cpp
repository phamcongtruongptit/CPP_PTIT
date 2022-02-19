#include<iostream>
#include<math.h>
using namespace std ; 

bool nguyento (int n){
    if (n==1) {
        return false ; 
    } 
    for (int i=2 ; i<=sqrt(n) ; i++){
        if (n%i == 0) {
            return false ; 
        }
    }
    return true  ; 
}

void taomang(int M[][100] , int  n) {
    for (int i= 0 ; i<n ; i++) {
        for (int j = 0 ; j<n ; j++){
            cin>>M[i][j] ; 
        }
    }
}

int sum( int M[][100] , int n ) {
    int sum = 0 ; 
    for (int i=0 ; i<=n ; i++) {
        for (int j= i ; j<=n ; j++) {
            if (nguyento(M[i][j]))
            sum+=M[i][j] ; 
        }

    }
    
    return sum ; 
}

main () {
    int n  ; cin>>n ; 
    int M[100][100] ; 
    taomang(M , n ) ; 
    cout<<sum(M , n);
}