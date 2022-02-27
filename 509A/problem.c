#include <stdio.h>
int main() {
    int n, a[10][10], i, j, k;
    scanf("%d", &n);
    a[n][n];
    for (i = 0; i < n; i++) {
        a[i][0] = 1;
        a[0][i] = 1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != 0 && j != 0){
                a[i][j] = a[i-1][j] + a[i][j-1];
//                printf("%d", a[i][j]);
            }
        }
    }
/* 
 // DEBUG CODE
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
*/
    printf("%d",a[n-1][n-1]);
    return 0;
}
