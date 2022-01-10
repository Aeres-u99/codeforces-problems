#include <stdio.h>
int main() {
    int i, n, p;
    int res[100];
    scanf("%d", &n);
    res[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &p);
        res[p - 1] = i + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    return 0;
}
