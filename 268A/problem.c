#include <stdio.h>
int main() {
    int n, i, j;
    int A[100], B[100];
    int counter = 0, count = 1;
    scanf("%d", &n);
    A[n];
    B[n];
    for (i = 0; i < n; i++) {
        scanf("%d %d", &A[i], &B[i]);
    }
    /*
    for (j = 0; j < n; j++) {
        printf("%d %d\n", A[j], B[j]);
    }
    */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i] == B[j]) {
                counter++;
            }
        }
    }
    printf("%d", counter);
    return 0;
}
