#include <stdio.h>
int main() {
    int c1, c2, n, cases, ratio;
    scanf("%d", &cases);
    while (cases > 0) {
        scanf("%d", &n);
        if (n > 1 || n == 0) {
        c1 = n / 3;
        c2 = (n - c1) / 2;
        c1 = c1 + (n - (2 * c2 + c1));
        printf("%d %d\n", c1, c2); }
        else {
            printf("1 0\n");
        }
        cases --;
    }
    return 0;
}
