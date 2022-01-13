#include <stdio.h>
int main(int argc, char *argv[]) {
    int n;
    int soldiers[100];
    int i, maxindex, minindex, min, max, swaps;
    scanf("%d", &n);
    soldiers[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &soldiers[i]);
    }
    min = soldiers[0];
    max = soldiers[0];
    for (i = 0; i < n; i++) {
        if (soldiers[i] <= min) {
            minindex = i;
            min = soldiers[i];
            printf("min: %d %d\n", minindex, soldiers[i]);
        }
        if (soldiers[i] >= max) {
            maxindex = i;
            max = soldiers[i];
            printf("max: %d %d\n", maxindex, soldiers[i]);
        }
    }
    swaps = maxindex + (n - 1 - minindex);
    printf("%d", swaps);
    return 0;
}
