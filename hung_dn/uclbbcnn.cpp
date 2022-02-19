#include<iostream>
using namespace std ;
int main ( int argc , char**argv) {
    int a,b;
    cin>>a>>b;
    int i,j ; 
    for (i= a>=b?a:b; i>0 ; i--) {
        if (a%i==0 && b%i==0) {
            break ; 
        }
    } 
    for (j=a ;j<= a*b ; j ++ ) {
        if (j%a== 0 && j%b==0) {
            break;
        }
    }
    cout<<i<<" "<<j;
    return 0;
}