#include<iostream>
using namespace std ; 
void taomang(int M[]  , int n) {
    for (int i= 0 ; i<n ; i++){
        cin>>M[i] ; 
    }
}
bool kiemtra(int n) {
    if (n <10) {
        return false ; 
    } 
    int m = n ; 
    int k = 0 ; 
    while (n>0) {
        k = k*10 + n%10 ;
        n/=10; 
    }
    if (m == k){
        return true ;
    } else {
        return false ; 
    }


}
int dem(int M [] , int n ){
    int count = 0 ; 
    for (int i= 0 ; i<n ; i++){
        if(kiemtra(M[i])) {
            count++ ; 
        }
    }
    return count ; 
}
main () {
    int n ; cin>> n ; 
    int M[100] ; 
    taomang(M , n) ; 
    cout<<dem(M,n)<<" " ; 
    for (int i=0 ; i<n ; i++) {
        if (kiemtra(M[i])) {
            cout<<M[i]<<" "; 
        }
    }

}