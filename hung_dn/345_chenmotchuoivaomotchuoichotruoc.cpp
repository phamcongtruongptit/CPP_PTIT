#include<iostream>
using namespace std ; 
main () {
    string str ; 
    getline(cin , str ) ; 
    string c ;  int k ; 
    getline(cin , c) ; cin>>k ;  
    str.insert( k-1 , c) ; 
    cout<<str ; 
}