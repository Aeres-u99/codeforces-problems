#include <stdio.h>
int main(int argc, char **argv) {
    int testcases;
    int n, a[100];
    int i, t, flag;
    scanf("%d", &testcases);
    while (testcases > 0) {
        scanf("%d", &n);
        a[n];
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        if (a[0] == a[1]) {
            t = a[0];
            for (i = 0; i < n; i++) {
                a[i] = a[i] ^ t;
            }
            for (i = 0; i < n; i++) {
                if (a[i] != 0){
                    printf("%d\n", i+1);
                }
            }
        } else {
            if (a[1] == a[2]) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    testcases --;
    }
    return 0;
}
