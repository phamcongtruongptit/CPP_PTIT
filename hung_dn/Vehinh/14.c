#include<stdio.h>
int main ( ) {
    int n; 
    int  j;
    int count =0 ;
    scanf ("%d",&n) ;
       for (j=1;j<=n*n;j++) {
           printf ("%d ",j);
           count ++;
           if ( count == n ) {
               printf ("\n");
               count =0;
           }
       }
    
    return 0;
}