#include<stdio.h>
#include<math.h>
int main () {
    int n;
    scanf ("%d",&n);
    int i, j;
    for (i=1 ; i<= (2*n -1) ; i++) {

        for (j=1 ; j<= abs(n-i); j++ ) {
            printf ("~");
        }
        for (j=1 ; j<=  (n- (abs (n- i)))*2-1 ;j++) {
            printf ("*");
        }

        printf ("\n");
    }
    return 0;
}