#include<stdio.h>
int main () {
    int m, n ;
    scanf("%d%d",&m,&n);
    int i, j ;
    for (i=1 ; i<= m ; i++) {
        for (j=i; j<=n ; j++) {
            printf ("%d",j);
        } 
        for (j =1; j <= i-1; j++) {
            if (j<=n) 
            printf ("%d",n);
        }

    printf ("\n");
    }
    return 0;
}