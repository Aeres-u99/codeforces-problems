#include <stdio.h>
#include <math.h>
int main() {
    int questions, total_time;
    int time, s = 0, i, n = 1;
    scanf("%d %d", &questions, &total_time);
    time = 240 - total_time;
    for (i = 1; (i < 10) && ((time - 5*n) > 0); i++) {
        time = time - 5*i;
        n = i;
        printf("%d %d\n", time, 5*i);
    }
    //n = (sqrt((8 * time)/5 + 1) - 1)/ 2;
    printf("%d", n);
    return 0;
}
