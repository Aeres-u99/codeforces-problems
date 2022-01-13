#include <stdio.h>
int main() {
    int a, b, n;
    int sq, gt, lt;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d %d", &a, &b);
        lt = a > b ? b : a;
        gt = a > b ? a : b;
        lt = 2 * lt; 
        gt = lt > gt ? lt : gt;
        sq = gt * gt;
        printf("%d\n", sq);
    n--;
    }
    return 0;
}
