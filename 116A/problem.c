#include <stdio.h>
int main() {
    int in, out, capacity[1000];
    int count, counter, i, total = 0, max;
    scanf("%d", &count);
    counter = count;
    capacity[count];
    while (counter) {
        scanf("%d %d", &out, &in);
        total = total + in - out;
        capacity[count - counter] = total;
        counter --;
    }
    /*
    for (i = 0; i < count; i++) {
        printf("%d ", capacity[i]);
    }
    */
    max = capacity[0];
    for (i = 0; i < count; i++) {
        if (capacity[i] > max) {
            max = capacity[i];
        }
    }
    printf("%d", max);
    return 0;
}
