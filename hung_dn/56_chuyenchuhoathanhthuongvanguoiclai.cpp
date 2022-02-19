#include<iostream>
using namespace std; 
main() {
    string c ; getline(cin , c) ; 
    for (int i=0 ; i<c.size() ; i++ ) {
        if (c[i]>='a' && c[i] <= 'z') c[i] = c[i]  - 32 ;  // xem cac ky tu la 1 so nguyen
        // thi chu thuong hon chu hoa 32 
        else if (c[i]>='A' && c[i] <= 'Z') c[i] = c[i]  + 32 ; 
     
}
cout<<c  ;
}