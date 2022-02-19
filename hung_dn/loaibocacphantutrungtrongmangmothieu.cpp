#include<iostream>
using namespace std ; 
void taomang(int a[] , int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>a[i];
    }
}
 void phanbiet(int a[], int b[], int n , int &m ) {
     m=0 ; 
     b[m]= a[0];
     m++; 
     for (int i=1 ; i<n ;i++) {
         bool kiemtra = true ;
         for (int j= i-1 ; j>=0 ; j--) {
             if (a[i]== a[j]) {
                 kiemtra = false;
                 break;
             }
         }
         if (kiemtra == true) {
             b[m] = a[i] ; 
             m++;
         }
     }
 }
int main (int argc, char**argv) {
    int a[100] , b[100], n,m;
    cin>>n ;
    taomang(a,n);
    phanbiet(a,b,n,m);
    for (int i=0 ; i<m;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}