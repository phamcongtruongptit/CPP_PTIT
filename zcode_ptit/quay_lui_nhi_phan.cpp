#include<iostream>
using namespace std ; 
int i ,n  , M[100] , count =1 ; 
void printf() {
    cout<<count++<<" : "; 
    for (int i=1 ; i<=n ; i++) cout<<M[i]<<" " ; 
    cout<<endl  ;  
}

void BackTrack(int j) {
    for (int i=0 ; i<=1 ; i++) {
        M[j] = i ; 
        if (j==n) {
            printf() ; 
        } else {
            BackTrack(j+1)  ; 
        }
    }
}
main() {
    n=4 ; 
    for (int i=1 ; i<=n ; i++) M[i]=0 ; 
    BackTrack(1) ; 
}