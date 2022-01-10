#include <stdio.h>
int main() {
    int n,k,i=0, count = 0;
    int scores[100];
    scanf("%d %d", &n, &k);
    do {
        scanf("%d", &scores[i++]);
    } while (getchar() != '\n' && i < n);
    scores[n];
    for (i=0;i < n;i++) {
        if (scores[i] >= scores[k-1] && scores[i] > 0) {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}

