#include <stdio.h>
int main() {
    int testcases, n, count;
    scanf("%d", &testcases);
    while (testcases > 0) {
        scanf("%d", &n);
        if (n <= 9) {
            count = n;
        } else {
            count = (n - (n % 11))/11 + 9;
        }
        printf("%d\n", count);
        testcases --;
    }
    return 0;
}
