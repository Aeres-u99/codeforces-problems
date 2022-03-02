#include <stdio.h>
int main() {
    int cases, n, a[100], i = 0;
    int sum = 0;
    scanf("%d", &cases);
    while (cases) {
        i = 0;
        scanf("%d", &n);
        a[n];
        do {
            scanf("%d", &a[i++]);
        } while (getchar() != '\n' && i < n);
        for (i = 0;i < n; i++) {
            sum += a[i];
        }
        if ((sum % 2 == 0) && (((sum / 2)%2) == 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        cases --;
        sum = 0;
    }
    return 0;
}
