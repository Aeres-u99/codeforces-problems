#include <stdio.h>
int main() {
    long long int n;
    int i, j,sum = 0;
    scanf("%lld",&n);
    for (i = 1; i <= n; i++) {
//        printf("%d\n", i);
        j = i;
        if (i % 2 != 0) {
            j = -1 * i;
        }
        sum = sum + j;
    }
    printf("%d", sum);
    return 0;
}
