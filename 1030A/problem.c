#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int responses[100], count = 0;
    scanf("%d", &n);
    do {
        scanf("%d", &responses[count]);
        count ++;
    } while (getchar() != '\n' && count < n);

    for (i = 0; i < n; i++) {
        if (responses[i] == 0) {
            continue;
        } else {
            printf("HARD");
            exit(0);
        }
    }
    printf("EASY");
    return 0;
}
