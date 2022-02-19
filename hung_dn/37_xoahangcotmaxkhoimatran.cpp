#include<iostream>
using namespace std ; 
void taomang(int M[][100] , int n , int m) {
    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            cin>>M[i][j] ; 
        }
    }
}

void in(int M[][100] , int n  , int m) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl; 
    }
}

void xoahangcotmax (int M[][100] , int &n , int &m) {
    int hmax=0 , cmax ; int h=0 , c=0 ; 
    int sum ; 
    for (int j=0 ; j<m ; j++) {
        hmax+=M[0][j] ; 
    }
    for(int i=1 ; i<n ; i++) {
        sum = 0 ; 
        for (int j=0; j<m ; j++){
            for (int j=0 ; j<n ; j++) {
                sum += M[i][j] ; 
            }
            if (sum>=hmax) {
            hmax = sum ; 
            h=i ;
        }
        }
        
    }

    for (int i=0 ; i<n ; i++){
        cmax += M[i][0] ; 
    }

    
        for (int j=1 ; j<m ; j++){
            sum = 0 ; 
            for (int i= 0 ; i<n ; i++){
                sum+=M[i][j] ;
            }
            if (cmax <= sum) {
            cmax  = sum ; 
            c=j ;
        }
        }
      
  //  cout<<cmax<<" "<<c<<endl ; 
    for (int i=h ; i<n ; i++) {
        for (int j=0 ; j<m; j++) {
            M[i][j] = M[i+1][j] ;
        }
    }
    n--  ; 
    for (int j=c ; j<m ; j++) {
        for (int i=0 ; i<n ; i++){
            M[i][j] = M[i][j+1] ; 
        }
    }
    m-- ; 
}


main (){
    int n, m ; cin>>n>>m ;
    int M[100][100] ; 
    taomang(M, n ,m) ; 
    xoahangcotmax(M,n , m);
    in(M, n , m) ; 


}