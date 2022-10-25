#include <stdio.h>
int main() {
    int cases, n, a[100], i = 0;
    int count1 = 0, count2 = 0;
    scanf("%d", &cases);
    while (cases) {
        i = 0;
        scanf("%d", &n);
        a[n];
        do {
            scanf("%d", &a[i++]);
        } while (getchar() != '\n' && i < n);
        for (i = 0;i < n; i++) {
            if (a[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }
        if ((count1 + count2 * 2) % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        cases --;
        count1 = 0;
        count2 = 0;
    }
    return 0;
}
