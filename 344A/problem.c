#include <stdio.h>
int main() {
    int N[100000];
    int n, i, current, previous, groups = 0, count = 0;
    scanf("%d", &n);
    N[n];
    do {
        scanf("%d", &N[count]);
        count ++;
    } while (count < n);

    for (i = 1; i < n; i++) {
        current = N[i];
        previous = N[i-1];
        if (current == previous) {
            continue;
        } else {
            groups ++;
        }
    }
    printf("%d", groups+1);
    return 0;
}
