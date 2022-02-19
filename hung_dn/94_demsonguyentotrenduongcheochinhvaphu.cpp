#include<iostream>
#include<math.h>
using namespace std ; 
void taomang(int M[100][100] , int n) {
    for (int i= 0 ; i<n ; i++) {
        for (int j =  0 ; j<n ; j++) {
            cin >>M[i][j];
        }
    }
}
bool nguyento (int n ) {
    if (n==1) {
        return false;
    } 
    for (int i=2 ; i<= sqrt (n) ; i++) {
        if (n%i ==0) {
            return false ; 
        }
    }
    return true; 
}
int count (int M[100][100] , int n , int D[100]) {
    int count  = 0 ; 
    for (int i= 0 ; i<n ; i++) {
        for (int j =0 ; j<n ; j++) {
            if (i == j || ((i+j) == n-1 )) {
                if(nguyento(M[i][j])) {
                    D[count] = M[i][j] ;
                    count ++ ; 
                }

            }
        }
    }
    return count; 
} 

int taomangchuaptuphanbien(int m[] ,int b[] ,int n) {
    int  x=0 ;
    b[x]= m[0];
    x++ ;
   
    for (int i=1 ; i<n ; i++) {
         bool kiemtra = true  ; 
        for (int j= i-1; j>= 0 ; j--) {
            if (m[j]==m[i]) {
                kiemtra= false ;
                break ;
            }
           
        }
         if (kiemtra == true ) {
                b[x] = m[i] ; 
                x++; 
            }
    }
  return x;
}


main () {
    int n ; cin>>n ; 
    int M[100][100] , D[100], N[100];
    taomang(M , n ) ; 
    int dem = count(M, n ,D); 
    //cout<<dem ; 
    // cout<< endl; 
    // for (int i =0 ; i<count(M, n ,D) ; i++) {
    //     cout<<D[i]<<" ";
    // }
    // cout<< endl;
    if (count(M, n ,D) == 0) {
        cout<<0 ;
    } else {
    cout<<taomangchuaptuphanbien(D ,N ,dem) ; 
    }
}