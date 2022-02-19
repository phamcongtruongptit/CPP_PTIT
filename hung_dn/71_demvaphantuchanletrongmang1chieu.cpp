#include<bits/stdc++.h>
using namespace std ; 
void taomang(int M[] , int n) {
    for (int i=0 ; i<n ; i++) {
        cin>>M[i] ; 
    }
}
void dempt (int M[] , int n , int &chan , int &le) {
    for (int i=0 ; i<n ; i++) {
        if (M[i]%2 == 0) {
            chan++ ; 
        } else if (M[i]%2 ==1 ) {
            le ++ ; 
        }
    }

} 
void inyeucau (int M[] , int n , int chan , int le) {
    cout<<chan<<" "; 
    for (int i= 0 ; i<n ; i++) {
        if (M[i]%2 == 0) {
            cout<<M[i]<<" " ; 
        }
    }
    cout<<endl ; 
    cout<<le<<" "; 
    for (int i= 0 ; i<n ; i++) {
        if (M[i]%2 == 1) {
            cout<<M[i]<<" " ; 
        }
    }
}

main () {
    int n; cin>>n ; int chan = 0 ; int le =0 ;
    int M[100] ;
    taomang (M,n);
    dempt(M , n ,chan ,le) ;
    inyeucau(M , n,chan , le) ;
}