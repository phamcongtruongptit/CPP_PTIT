#include<bits/stdc++.h>
using namespace std ; 
main (){
    int t ;cin>>t ; 
    while (t--) {
        int a , m  ; cin>>a >> m ; 
        bool kiemtra = true; 
        for(int i =0 ; i<=m-1 ; i++) {
            if ((a*i)%m ==1 ){
                kiemtra = false ; 
                cout<<i;
                
                break ; 
            }
        }
        if (kiemtra == true) {
            cout<<-1 ; 
        }
        cout<<endl ; 
    }
}