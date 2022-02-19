#include<iostream>
using namespace std;
int main (int argc , char** argv) {
    int n,i;
    cin>>n;
    int M[n];
    for ( i=0 ; i<n; i++) {
        cin>>M[i];
    }
    int max=M[0];
    int min=M[0];
    for ( i=1 ; i<n; i++) {
        if (M[i]>max) {
            max = M[i];
        }
        if (M[i]<min) {
            min = M[i];
        }
    }
    cout<<max<<" "<<min;
    return 0;
}