#include <stdio.h>
#include <math.h>
int main() {
    int questions, total_time;
    int time, s, n;
    scanf("%d %d", &questions, &total_time);
    time = 240 - total_time;
    n = (sqrt((8 * time)/5 + 1) - 1)/ 2;
    printf("%d", n);
    return 0;
}
