#include<iostream>
using namespace std ; 
void taomang(int M[] , int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>M[i];
    } 
}
void in(int M[] , int n ) {
    for (int i=0 ; i<n ; i++) {
        cout<<M[i]<<" " ; 
    }
}
int kt(int M[] , int n) {
    for (int i=0 ; i<n-1 ; i++) {
        if (M[i]>M[i+1]) {
            return 0 ;
        }
    }
    return 1;
}
void bul(int *M , int n ) {
    for (int i=0  ; i<n-1 ; i++) {
        for (int j=0  ; j<n-i-1 ; j++) {
            if (M[j]>M[j+1]) {
                int tmp = M[j]; 
                M[j] = M[j+1];
                M[j+1] = tmp ; 
            }
           
        }
         in(M , n);
         cout<<endl ;
         if (kt(M,n)) {
             break ; 
         }
    }
}
int main () {
    int n; 
    cin>>n ; 
    int M[100] ; 
    taomang(M,n);

    bul(M , n);
    return 0;
}