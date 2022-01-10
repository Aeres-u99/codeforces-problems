#include <stdio.h>

int nsum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int cubes, count, n;
    int copyn;
    scanf("%d", &cubes);
    count = 0;
    while (cubes >= nsum(count)) {
        count+=1;
        copyn = nsum(count);
        cubes = cubes - nsum(count);
//        printf("%d : %d -- %d\n", cubes, nsum(count), count);
    }
    printf("%d", count);
    return 0;
}
