#include <stdio.h>
#include <math.h>

int main() {
    int questions, time_to_get_home;
    int time, i = 1, count = 0;
    scanf("%d %d",&questions, &time_to_get_home);
    time = 240 - time_to_get_home;
    while (time >= 5 * i) {
        time = time - 5 * i;
        count ++;
        i++;
    }
    if (count > questions) {
        count = questions;
    }
    printf("%d", count);
    return 0;
}
