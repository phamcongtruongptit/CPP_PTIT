#include<iostream>
using namespace std ; 
main() {
    string str ; 
    getline(cin , str)  ; 
    for(int i=0  ; i< str.length() ; i++ ) {
        if (str[i] != ' ' ) cout<<str[i]<<" " ; 
    }
}