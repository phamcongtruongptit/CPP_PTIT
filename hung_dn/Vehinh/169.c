#include<stdio.h>
int main () {
    int m,n;
    scanf ("%d%d",&n,&m);
    int i,j;
    for (i=1; i<=n; i++) {
        for ( j =1 ; j<= m ; j++) {
            if (j%2 == 1) {
                printf ("0");
            } else {
                printf ("1");
            }
        }
        printf ("\n");
    }
    return 0;
}