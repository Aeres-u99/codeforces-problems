#include <stdio.h>
int main() {
    int width, height, n, cases;
    int count = 1;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d %d %d", &width, &height, &n);
        while (width > 1 || height > 1) {
            if (width % 2 == 0) {
                width = width / 2;
                count = count * 2;
            }
            else if (height % 2 == 0) {
                height = height / 2;
                count = count * 2;
            }
            else {
                break;
            }
        }
        if (count >= n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        count = 1;
        cases --;
    }
    return 0;
}
