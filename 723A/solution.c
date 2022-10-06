#include <stdio.h>

int main() {
    int x[3];
    int i, j, avg, distance, pew;
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for (i = 0; i < 3; i++) {
        for (j = i+1; j < 3; j++) {
            if (x[i] > x[j]) {
                pew = x[i];
                x[i] = x[j];
                x[j] = pew;
            }
        }
    }
//    avg = (x[0]+x[2]) / 2;
//    distance = (avg - x[0]) + (x[2] - avg) + (x[1] >= avg ? x[1] - avg : avg - x[1]);
    printf("%d", x[2] - x[0]);
    return 0;
}
