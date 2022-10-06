#include <stdio.h>
int main() {
    int n,i,j;
    int A[1000000];
    int police = 0,crime = 0;
    scanf("%d", &n);
    A[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++) {
        if (A[i] > 0) {
            police+=A[i];
        }
        if (A[i] < 0) {
            if (police > 0) {
                police --;
            } else {
                crime++;
            }
        }
    }
    printf("%d", crime);
    return 0;
}
