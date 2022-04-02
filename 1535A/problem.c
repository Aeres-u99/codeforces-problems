#include <stdio.h>
int main() {
    int cases;
    int a1, a2, b1, b2;
    int max1, min1, max2, min2;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        max1 = a1 > a2 ? a1 : a2;
        min1 = a1 < a2 ? a1 : a2;
        max2 = b1 > b2 ? b1 : b2;
        min2 = b1 < b2 ? b1 : b2;
        if (min2 > max1 || min1 > max2) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
        cases --;
    }
    return 0;
}
