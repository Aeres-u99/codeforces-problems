#include <stdio.h>
int main() {
    int n, a[1000];
    int count, i, j; 
    count = 0;
    scanf("%d", &n);
    do {
        scanf("%d", &a[i++]);
    } while (getchar() != '\n' && i < n);
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if ((a[j] < a[i]) || (a[j] > a[i])) {
                count ++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
