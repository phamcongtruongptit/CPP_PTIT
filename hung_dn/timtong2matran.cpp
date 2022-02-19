#include<iostream>
using namespace std ;

void taomang(int M[100][100] , int a , int b) {
    for (int i=0 ; i<a ; i++) {
        for (int j= 0 ; j<b ; j++) {
            cin>>M[i][j] ; 
        }
    }
}

void inmang(int M[100][100] , int a,int b) {
    for (int i= 0 ; i<a ; i++) {
        for (int j= 0 ; j<b ; j++) {
            cout <<M[i][j]<<"  " ;
        }
        cout<<endl ;
    }
}

void tong(int M[100][100] , int M1[100][100],int M2[100][100] , int a, int b ) {
    for (int i=0 ; i<a; i++) {
        for (int j= 0; j<b; j++) {
            M[i][j] = M1[i][j] + M2[i][j] ;
        }
    }
}



int main (int argc, char**argv) {
    int a,b; 
    cin>>a>>b ;
    cout<<endl ;
    int M1[100][100] , M2[100][100] ;
    taomang(M1 ,a ,b);
    taomang(M2 ,a ,b);

    int M[100][100] ;
    tong (M,M1,M2, a ,b);


    inmang(M , a ,b); 
    return 0;
}



