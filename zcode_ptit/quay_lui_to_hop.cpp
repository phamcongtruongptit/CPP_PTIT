#include<iostream>
using namespace std ; 
int n , k , i , M[100], count =1  ; 
void printf() {
    cout<<count++<<":" ; 
    for(int i=1 ; i<=k ; i++) cout<<M[i]<<" " ; 
    cout<<endl ; 
}

void BackTrack(int j) {
    for (int i=M[j-1] +1 ; i<=n-k+j ; i++) {
        M[j] = i ; 
        if(j==k) printf() ; 
        else BackTrack(j+1) ; 
    }
}
// void BackTrack(int j) {
//     for (int i=M[j-1] +1 ; i<=n-k+j ; i++) {// liet ke cac phan tu cua S[j]
//         M[j] = i ; 
//         if (j==k) printf() ; 
//         else BackTrack(j+1)  ; 
//     }
    
// }

main() {
    n=5 ; k=3 ; 
    for(int i=1 ; i<=k ; i++) M[i] = i ; 
    BackTrack(1) ; 
}

















