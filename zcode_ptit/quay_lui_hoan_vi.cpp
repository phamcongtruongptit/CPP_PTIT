#include<iostream>
using namespace std ; 
int i,n , M[100] ;
int count = 1 ; 

bool unused[100] ; 
void printf() {
    cout<<count++<<": " ; 
    for(int i=1 ; i<=n ; i++) cout<<M[i]<<" "  ;
    cout<<endl ; 
}

void BackTrack(int j) {
    for( int i=1 ; i<=n ; i++) {
        if(unused[i] == true ) {
            M[j] = i  ; 
            unused[i] = false ; 
            if(j==n ) printf() ; 
            else BackTrack(j+1) ; 
            unused[i] = true; 
        }
    }
}
main() {
    n=4 ; 
    for (int i=1 ; i<=n ; i++) unused[i] = true ; 
    BackTrack(1) ; 
}