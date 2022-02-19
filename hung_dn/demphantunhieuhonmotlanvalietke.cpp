#include<iostream>
using namespace std ;
void taomang(int a[] , int n) {
    for (int i= 0 ; i<n ; i++) {
        cin>>a[i] ;
    }
}

void phantuphanbiet(int a[] , int b[] ,int n , int &m) {
    m=0 ; 
    b[m] = a[0] ;
    m++ ;
    for (int i=1 ; i<n ; i++) {
        bool kiemtra = true ; 
        for (int j=i-1 ; j>= 0 ; j--) {
            if (a[i] == a[j]) {
                kiemtra = false ;
                break;
            }
        }
        if (kiemtra == true) {
            b[m] = a[i] ;
            m ++ ; 
        }
    }
}

void demphantu( int a[] , int b[] , int n , int m , int &k ) {
    for (int i= 0 ; i<m ; i++ ) {
        int count =0 ;
        for (int j=0 ; j<n ; j++) {
            if (b[i] == a[j]) {
                count ++ ; 
            }
        }
        if (count != 1 ) {
           k++;
        } 
       
    }
}


void inphantu( int a[] , int b[] , int n , int m ) {
    for (int i= 0 ; i<m ; i++ ) {
        int count =0 ;
        for (int j=0 ; j<n ; j++) {
            if (b[i] == a[j]) {
                count ++ ; 
            }
        }
        if (count != 1 ) {
            cout<<b[i]<<" ";
        } 
       
    }
}


int main (int argc , char**argv) {
    int a[100] , b[100] , n, m ,k=0;
    cin >>n ; 
    taomang(a,n);
    phantuphanbiet(a,b,n,m);
    demphantu(a,b,n,m,k);
    cout<<k<<endl;
    inphantu(a,b,n,m) ;



    return 0;
}

