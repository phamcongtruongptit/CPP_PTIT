#include<iostream>
using namespace std ; 
void timmangphanbiet(int M[] , int B[] , int n , int &m) {
    B[m] = M[0] ; 
    m++ ; 
    for (int i= 1 ; i<n ; i++) {
        bool kiemtra = true ; 
        for (int j = i-1 ; j>=0 ; j--) {
            if (M[i] == M[j]) {
                kiemtra = false ; 
                break ; 
            }
        }
        if (kiemtra == true){
            B[m] = M[i] ; 
            m++ ; 
        }
    }
}
// void phantuphanbiet(int a[] , int b[] ,int n , int &m) {
//     m=0 ; 
//     b[m] = a[0] ;
//     m++ ;
//     for (int i=1 ; i<n ; i++) {
//         bool kiemtra = true ; 
//         for (int j=i-1 ; j>= 0 ; j--) {
//             if (a[i] == a[j]) {
//                 kiemtra = false ;
//                 break;
//             }
//         }
//         if (kiemtra == true) {
//             b[m] = a[i] ;
//             m ++ ; 
//         }
//     }
// }

main () {
    int t ; cin>>t  ; 
    while (t--) {
        int n; cin>> n  ; int m=0 ;  
        int M[n] , B[n] ; 
        for (int i=0 ; i<n ; i++) cin>>M[i] ; 
        timmangphanbiet(M , B, n ,m) ; 
 //       for (int i=0 ; i< m ; i++) cout<<B[i]<<" " ; 
        int min = B[0] ; 
        int max = min ; 
        for (int i=0 ; i<m ; i++) {
            if (min>B[i]) {
                min = B[i] ; 
            }
            if (max<B[i]) {
                max  = B[i] ; 
            }
        }
        cout<<max-min-(m-1)<<endl ; 
    }
}