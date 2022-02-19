#include<stdio.h> 
int main () {
    int m,n; 
    scanf ("%d%d",&n,&m);
    int i,j;
    for (i=1; i<= n ; i++) {
        if ( i%2 == 1) {
            for (j=1; j<= m; j++) {
                printf ("1");
            } 
            } else if (i%2 == 0) {
                for (j=1;j<=m;j++) {
                    printf ("0");
                }
            }
           printf ("\n"); 
        }
        
        
    return 0;
}