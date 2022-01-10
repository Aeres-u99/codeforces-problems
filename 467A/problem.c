#include <stdio.h>
int main() {
    int n, p, q, t, count = 0;
    scanf("%d", &n);
    t = n;
    while (n > 0) {
        scanf("%d %d", &p, &q);
        if (q-p >= 2) {
            count ++;
        }
        n --;
    }
    printf("%d", count);
    return 0;
}
