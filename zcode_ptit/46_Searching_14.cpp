#include<iostream>
using namespace std ; 

void tim(long M[]  , long b[] , long n , long &m) {
    b[m]= M[0]; 
    m++ ; bool k = true ; 
    for (long i=0 ; i<n ; i++) {
        bool ok= true ; 
        for (long j=i-1 ; j>=0 ; j--) {
            if (M[i] == M[j]) {
                ok = false ; k= false ; 
                cout<<M[i]<<endl ;
                break ; 
            } 
        }
        if (ok == true ){
            b[m] = M[i] ; 
            m++ ; 
        }
        if (k==false ){break ;}
    }

    if (k== true) cout<<-1<<endl ; 
}

main(){
    int t ;cin>>t ; 
    while (t--){
        long n , m=0  ; cin>> n ; long M[n] , b[n] ; //bool k = true ; 
        for (long  i=0 ; i<n ; i++) cin>>M[i] ; 
        tim(M , b , n ,m) ; 

      
    } 
}