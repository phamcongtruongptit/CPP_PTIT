#include<iostream>
using namespace std; 
   long ucln( long  a,  long b) {
    int tmp;
    while (b!=0) {
        tmp = a%b ; 
        a=b ; 
        b=tmp ; 
    }
    return a; 
}

 long  bcnn (  long a, long b) {
    return (a*b) / ucln(a,b) ;
}
int main () {
    int t;

    cin>>t;

    while (t--) {
        long  n ;
        cin>>n;
       long  tmp = 1; 
        for (int i=1 ; i<=n-1 ; i++) {
            tmp = bcnn(tmp , i+1) ;
        }
        cout<<tmp<<endl; 
    
        }
     return 0;
}
