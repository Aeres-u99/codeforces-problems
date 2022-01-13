#include <stdio.h>
int main(int argc, char **argv) {
    int testcases;
    long long int a, b, diff;
    scanf("%d", &testcases);
    while (testcases > 0) {
        scanf("%ld %ld", &a, &b);
        diff = (a > b) ? a - b : b - a;
     //   printf("diff: %ld\n", diff);
        if (a > b) {
            if (diff % 2 == 0) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        } else if (a == b) {
            printf("0\n");
        } else {
            if (diff % 2 != 0) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    testcases --;
    }
    return 0;
}
