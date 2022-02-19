#include<iostream>
using namespace std ; 
main () {
    string str ; 
    getline(cin , str);
    int chu= 0 , so = 0 , kytu = 0 ; 
    for (int i=0 ; i<str.size() ; i++) {
        if ( (str[i]<='z' && str[i] >='a') || (str[i]<='Z' && str[i] >='A')  )  chu ++ ; 
         else if  (str[i]<='9' && str[i] >='0') so ++ ; 
         else kytu++ ; 
       

    }
      cout<<so<<" "<<chu<<" "<<kytu ; 
}