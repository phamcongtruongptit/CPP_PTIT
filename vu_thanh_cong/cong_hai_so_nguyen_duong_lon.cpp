#include<bits/stdc++.h>
using namespace std ; 
string ketqua(string a, string b) {
    while(a.size() > b.size() ) b= '0' +b ; 
    while(a.size() < b.size() ) a = '0' + a; 
    int nho = 0 ; string ketqua; 
    for (int i= a.size() - 1; i>=0 ; i--) {
        int so = int(a[i] - '0' ) +int(b[i] - '0')  + nho;  
        ketqua = char(so%10 + '0') +ketqua ; 
        nho = so/10 ;  
    }
    if(nho !=  0) ketqua = char(nho + '0') +ketqua ; 
    return ketqua; 
}

main(){
    string a,b; 
    cin>>a>>b; 
    cout<<ketqua(a , b); 
}