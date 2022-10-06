#include <stdio.h>
int main(int argc, char *argv[]) {
    int n;
    int soldiers[100];
    int i, maxindex, minindex, min, max, swaps, minswap, maxswap;
    scanf("%d", &n);
    soldiers[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &soldiers[i]);
    }
    min = soldiers[0];
    max = soldiers[0];
    minindex = 0;
    maxindex = 0;
    for (i = 0; i < n; i++) {
        if (soldiers[i] <= min) {
//            if (min != soldiers[i]){
            minindex = i;
//            }
            min = soldiers[i];
//            printf("min => minindex %d : minval: %d\n", minindex, soldiers[i]);
        }
        if (soldiers[i] >= max) {
            if (max != soldiers[i]){
            maxindex = i;
            }
            max = soldiers[i];
//            printf("max => maxindex %d : maxval: %d\n", maxindex, soldiers[i]);
        }
    }
//    swaps = maxindex + (n - 1 - minindex);

    maxswap = (maxindex);
    minswap = (n - minindex - 1);
//    printf("maxs: %d mins: %d", maxswap, minswap);
    if (maxindex == 0) {
        maxswap = 0;
    }
    if (minindex == (n - 1)) {
        minswap = 0;
    }
    if (maxindex > minindex) {
        swaps = maxswap + minswap - 1;
    } else {
        swaps = maxswap + minswap;
    }
    printf("%d", swaps);
    return 0;
}
