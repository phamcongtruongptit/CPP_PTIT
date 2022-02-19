#include<iostream>
using namespace std ; 
int main (int argc, char**argv) {
    int a,b,p;
    cin>>a>>b ;
    int A[a] , B[b] ;
    for (int i=0 ; i<a; i++) {
        cin>> A[i];
    }
    for (int i=0 ; i<b; i++) {
        cin>> B[i];
    }
    cin >> p ;
    if (p!=0){
    for (int i=0 ; i<a ; i++) {
        cout <<A[i]<<" "; 
        if (p==(i+1)) {
        for (int j=0 ; j<b; j++) {
        cout <<B[j]<<" ";
            }
        } 
    }
    } else if (p==0) {
        for (int j=0 ; j<b; j++) {
        cout <<B[j]<<" ";
            }
        for (int i=0 ; i<a ; i++) {
        cout <<A[i]<<" ";
        }
        
    }
    return 0 ;
}

// #include<iostream>
// using namespace std ; 
// void KhoiTaoMang(int M[ ], int &n) {
//     cin>>n ; 
//     for (int i=0 ; i<n; i++) {
//         cin>>M[i];
//     }
// }
// int main (int argc, char**argv) {
//     int n= 100 ; 
//     int M[100] ;
//     KhoiTaoMang(M,n);


//     return 0;
// }