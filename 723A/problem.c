#include <stdio.h>
#include <stdlib.h>
int main() {
    int ptA, ptB, ptC;
    int max, min, avg, distance;
    scanf("%d %d %d", &ptA, &ptB, &ptC);
    max = (ptA > ptB) ? (ptA > ptC ? ptA : ptC) : (ptB > ptC ? ptB : ptC);
    min = (ptA < ptB) ? (ptA < ptC ? ptA : ptC) : (ptB < ptC ? ptB : ptC);
    distance = max - min;
    printf("%d", distance);
    return 0;
}
