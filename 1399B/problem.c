// Doesn't works on codeforces site. Seems like they have outdated compiler as it works on my machine

#include <stdio.h>
#include <stdlib.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

void stabilizeArrays(long long int candies[],long long int oranges[],int length) {
    long long int i, ostd, cstd, step = 0;
    ostd = oranges[0];
    cstd = candies[0];
    for (i = 0; i < length; i++) {
        if (oranges[i] < ostd) ostd = oranges[i];
        if (candies[i] < cstd) cstd = candies[i];
    }
    for (i = 0; i < length; i++) {
        step += MAX(abs(oranges[i] - ostd), abs(candies[i] - cstd));
    }
    printf("%ld\n", step);
}

int main() {
    long long int candies[50], oranges[50];
    int i, steps, cases, gift;
    scanf("%ld", &cases);
    while (cases > 0) {
        scanf("%ld", &gift);
        for (i = 0; i < gift; i++) {
            scanf("%ld", &candies[i]);
        }
        for (i = 0; i < gift; i++) {
            scanf("%ld", &oranges[i]);
        }
        stabilizeArrays(candies, oranges, gift); //gift because we need to know the length of array
        cases --;
    }
    return 0;
}
