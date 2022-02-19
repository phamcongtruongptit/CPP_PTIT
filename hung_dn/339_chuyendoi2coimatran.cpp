#include<iostream>
using namespace std ; 

void taomang(int M [][100] , int n , int m) {
     for (int i=0 ; i<n ; i++) {
        for(int j= 0 ; j<m ; j++){
            cin>>M[i][j];
        }
        
    }
}
// void doicho (int M[][100] , int n , int m , int a , int b , int K[]) {
//     for (int i=0 ; i<m ; i++) {
//         if (a-1< 0 || a-1 > m-1 ||b-1< 0 || b-1 > m-1 ) {
//             break ; 
//         }
//         for (int j=0 ; j<n ; j++){
//             if (i==a-1) {
//                 K[j] = M[j][a-1];
//                 M[j][a-1] = M[j][b-1] ; 
//             }
//             if (i==b-1) {
//                 M[j][b-1] = K[j] ; 
//             }

//         }
//     }
// }
void inmang(int M[][100] , int n, int m){
    for (int i=0 ; i<n ; i++) {
        for(int j= 0 ; j<m ; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl ; 
    }
}

void Hoandoi(int &A,int &B)
{
   int t=A;
   A=B;
   B=t;
}

void Hoandoicot(int MT[][100],int Dong,int K1,int K2)
{
   for(int i=0;i<Dong;i++)
      Hoandoi(MT[i][K1],MT[i][K2]);
}

main () {
    int n , m ; cin>>n>>m ; 
    int M[100][100] ,K[m];
    taomang(M , n ,m) ; 
    int i ,j ; cin>>i>>j ; 
    int a = i<j?i:j ; int b= i>=j?i:j ; 
 //   doicho(M ,n,m,a,b,K) ; 
    Hoandoicot(M ,  n , a-1 ,b-1) ; 
    inmang(M , n , m) ; 
}