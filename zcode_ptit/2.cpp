#include<iostream>
using namespace std;
 main () {
    int t; 
    cin>>t ; 
    while (t--) {
        long long a ,b ;
        cin>>a>>b ; 
        long long k=a*b;
        while (a!=b) {
            if (a>b) {
                a-=b;            
        }  else {
            b-=a ; 
        }
         
    }
    cout<<k/a<< " "<<a<<endl ;

    }
    return  0;
}