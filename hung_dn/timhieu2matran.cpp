#include<iostream>
using namespace std ; 

void khoitaomang( int m[100][100] , int a, int b) {
    for (int i=0 ; i<a; i++) {
        for (int j=0 ; j<b ;j++) {
            cin>>m[i][j];
        }
    } 
} 

void inmang(int m[100][100], int a, int b) {
    for (int i=0 ; i<a ; i++) {
        for (int j=0 ; j<b ; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl ; 
    }
}

void hieu(int m[100][100] , int m1[100][100], int m2[100][100], int a, int b) {
    for (int i=0 ; i<a ; i++) {
        for (int j=0 ; j<b ; j++){
           m[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

int main ( int argc, char ** argv) {
    int a,b; 
    cin>>a>>b ;
    int  m1[100][100] , m2[100][100] , m[100][100] ;
    khoitaomang(m1,a,b) ;
    khoitaomang(m2,a,b) ;
    hieu(m,m1,m2,a,b) ;
    cout<<endl; 
    inmang(m,a,b);


    return 0;
}