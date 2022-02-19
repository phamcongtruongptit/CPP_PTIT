#include<iostream>
#include<math.h>
using namespace std ; 

bool nguyento(int n) {
    if (n==1){
        return false ;
    }
    for (int i  =2 ; i<=sqrt (n)  ; i++){
        if (n%i ==0) {
            return false ; 
        }
    }
    return true  ;
}
void taomang(int M[][100]  , int n) {
    for (int i = 0 ; i<n ; i++  ){
        for (int j = 0 ; j<n ; j++){
            cin>>M[i][j] ; 
        }
    }
}

void demptu(int C[] , int M[][100] ,  int n) {
    for (int i= 0 ; i< n ; i++){  // duyethang  
        for (int j = 0 ; j<n  ;  j++) {
            if (nguyento(M[i][j])) {
                C[i]++ ; 
            }
        }
    }
}

int timmax(int C[] , int n ) {
    int max = C[0]  ; 
    for (int i = 1 ; i<n ;i++){
        if (C[i]> max) {
            max = C[i]; 
        }
    }
    return max ; 
}

int timhangthui (int C[] , int n ) {
    for (int i = 0 ; i<n ; i++){
        if (C[i] == timmax( C , n ) ) {
            return i ; 
            break ;
        }
    }
}

main () {
    int n ; cin>> n ;
    int M[100][100]  ; 
    taomang (M , n) ; 
    int C[n] = {0} ; 
    demptu(C , M , n) ;
    cout<<timhangthui(C , n)+1  <<endl ; 
    for (int i = 0 ; i<n ; i++){
        if (nguyento(M[timhangthui(C , n)][i])){
            cout<<M[timhangthui(C , n)][i]<<" ";
        }
    }
 
 
}
 
 
 
 
 
//     for (int i =0 ; i<n ; i++) {
//         if (nguyento((M[timhangthui(C , n)][i])){
//             cout<<nguyento(M[timhangthui(C , n)][i];
        
//     }
// }   

// }