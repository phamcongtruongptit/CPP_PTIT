#include<iostream>
using namespace std ; 
main() {
    string c ;
    getline(cin , c )  ; 
    string k ; getline(cin , k) ; 
    string l="" ; 
    while(c.find(k) != -1 )
    c.replace(c.find(k), k.length() , l ) ; 
    while (c[0] == ' ' ) {
     c.replace( 0 , 1 , l ) ;
    }
    cout<<c; 
}