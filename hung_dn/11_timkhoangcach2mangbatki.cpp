#include<iostream>
#include<math.h>
using namespace std ; 
void tao(int M[] , int n){
    for(int i=0 ; i<n ; i++){
        cin>>M[i] ; 
    }
}
// void bubblesort (int M[] , int n){
//     for (int i = 0 ; i<n-1 ; i++){
//         for (int j=0 ;j<n-i-1 ; j++ ){
//             if (M[j]>M[j+1]) {
//                 int tmp = M[j];
//                 M[j] = M[j+1];
//                 M[j+1] = tmp ; 
//             }
//         }
//     }
// }

// int minArr(int M[] , int n) {
//     int min=M[n-1] - M[n-2] ; 
//     for (int i=n-2 ; i>=1 ; i--){
//         if (min>(M[i] - M[i-1])){
//             min = M[i] - M[i-1] ;
//         }
//     }
//     return min; 
// }

int timMin(int M[]  , int n) {
    int min = abs (M[0]- M[1]);
    for (int i=0 ; i<n-1; i++){
        for(int j=i+1 ; j<n ; j++){
            if (min > abs (M[i]- M[j] ) ) {
                min =abs ( M[i] - M[j]) ; 
            }
        }
    }
    return min ; 
}

void xacdinh (int M[] , int n ) {
    bool k = false ; 
      for (int i=0 ; i<n-1; i++){
        for(int j=i+1 ; j<n ; j++){
            if (timMin( M ,  n) == abs (M[i]- M[j] ) ) {
                 cout<<abs (M[i]- M[j] )<<" "<< (M[i]<=M[j] ? M[i] : M[j])<<" "<<(M[i]>M[j]?M[i]:M[j])<<" ";
                 k= true; 
                 break ; 
            }
        }
        if (k ){
            break ; 
        }
    }
} 

main () { 
    int n ; cin>> n ; int M[100] ; 
    tao(M , n) ; 
    // bubblesort(M , n) ; 
    // int min = minArr(M , n) ; 
    // for (int i=n-1 ; i>=1 ; i--){
    //     if (min == (M[i] - M[i-1])){
    //         cout<<min<<" "<<M[i-1]<<" "<<M[i] ; 
    //         break ; 
    //     }
    // }
    xacdinh(M ,n) ; 

}