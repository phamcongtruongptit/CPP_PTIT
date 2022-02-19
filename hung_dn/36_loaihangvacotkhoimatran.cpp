#include<iostream>
using namespace std  ; 
void taomang(int M[][100] , int n , int m) {
    for (int i=0 ; i<n ; i++){
        for (int j=0 ; j<m ; j++){
            cin>>M[i][j]  ; 
        }
    }
}
void in(int M[][100] , int n, int m){
    for (int i=0 ; i<n  ; i++){
        for (int j=0 ; j<m ;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl ; 
    }
}

void xoahangminmax(int M[][100], int &n , int &m ) {
    int hmax ;  int h = 0 ; 
    int cmax ; int c=0 ;
    
    for (int j=0 ; j<m; j++){
        hmax+=M[0][j];
    }
    int sum =0;
    for (int i=1  ; i<n ; i++){
        for (int j=0 ; j<m ; j++) {
            sum+= M[i][j] ; 
        }
        if (sum>=hmax) {
            hmax = sum ; 
            h=i ; 
        }
        sum =0;
    }
 //   cout<<hmax<<" "<<h<<endl ; 
    for (int i=h ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            M[i][j]= M[i+1][j] ; 
        }
    }
    n--; 


    for (int i=0 ; i<n ; i++){
        cmax+=M[i][0] ; 
    }
     sum =0;
    for (int j=1 ; j<m ; j++) {
        for (int i=0 ; i<n ; i++){
            sum+=M[i][j] ; 
        }
        if (sum >= cmax) {
            cmax = sum ; 
            c = j ;
        }
        sum =0;
    }
   // cout<<cmax<<" "<<c<<endl ; 
    for (int j=c ; j<m ; j++){
        for (int i=0 ; i<n ; i++){
            M[i][j] = M[i][j+1] ;
        }
    }
    m-- ; 
    
}

main (){
    int n , m ; cin>>n>>m ;
    int M[100][100] ; 
    taomang(M, n ,m) ; 
   // cout<<endl ;
    xoahangminmax(M,n , m) ;
  //  cout<<endl ;  
     in(M , n , m) ;


}