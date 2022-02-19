#include<stdio.h>
int main () {
    int m ,n;
    scanf ("%d%d",&m,&n);
    int count = 0;
    int i;
    for (i=1;i<= m*n ; i++) {
        printf ("%d",i) ;
        count ++ ; 
        if (count % n==0 ) {
            printf ("\n");
            
        }
    }
    return 0 ;
}