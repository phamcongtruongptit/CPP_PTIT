#include<iostream>
using namespace std;
 int main (int argc, char**argv) {
     int n;
     cin>>n;
     int m[n];
     for(int i=0 ; i<n; i++) {
         cin>>m[i];
     }
    for (int i=0 ; i<n-1; i++) {
         for(int j=i+1; j<n; j++) {
             if (m[i]>m[j]) {
                int tmp = m[i];
                m[i]= m[j] ; 
                m[j]= tmp;
            }
         }
     }
     for (int i=0 ; i<n; i++) {
         if(m[i]%2==0) {
             cout<<m[i]<<" ";
         }
     }
     for (int i=0 ; i<n; i++) {
         if(m[i]%2==1) {
             cout<<m[i]<<" ";
         }
     }
     return 0;
 }