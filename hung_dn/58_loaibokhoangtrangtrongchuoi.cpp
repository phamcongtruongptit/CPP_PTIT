// #include<iostream>
// using namespace std ; 
// main () {
//     string s  ; 
//     getline(cin , s) ;
//     while(s.find(" ") != -1 ) {
//         s.erase(s.find(" "), 1 ) ; 
//     }
//     cout<<s;  

// }

#include<iostream>
using namespace std; 
 main () {
     string s  ; 
     getline( cin ,s ) ; 
     string k="" ; 
     int i=0; 
     while(i<s.size()) {
         if(s[i] == ' ') {
             s.replace(i , 1 , k) ; 
             i-- ; 
         } 
         i++ ; 
     }
     cout<<s ; 

 }