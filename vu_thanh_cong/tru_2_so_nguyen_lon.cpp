#include<iostream>
using namespace std ; 
string ketqua(string a,  string b) {
    while(a.size() > b.size()  ) b = '0' +b ; 
    while(a.size() <b.size() ) a = '0'+a ; 
    bool check = true; 
    if(a < b) {
        a.swap(b) ; 
        check = false ; 
    }

    int nho = 0  ; string ketqua = ""   ;
    for ( int i = a.size() - 1  ; i>=0 ; i-- ){
        int so = int(a[i] - '0') - int(b[i] - '0') - nho; 
        if(so<0) {
            ketqua  = char(so+10+'0') +ketqua ; 
            nho = 1 ; 
        } else {
            ketqua = char(so+'0') + ketqua; 
              nho = 0 ; 
        }
    }
    while(ketqua[0] == '0') ketqua.erase(0,1)  ;  // xóa 1 phần tử kể từ vị trí 0. s.erase(pos,n): xóa n phần tử từ vị trí Pos của xâu s.
    if(check == false ) ketqua = '-' + ketqua ; 
    return ketqua; 
}

main() {
    string a,b ; 
    cin>>a>>b  ; 
    cout<<ketqua(a,b) ; 
}