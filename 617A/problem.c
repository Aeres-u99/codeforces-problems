#include <stdio.h>
int main() {
    int distance, steps;
    scanf("%d", &distance);
    if (distance % 5 != 0){
        steps = distance / 5 + 1;
    } else {
        steps = distance / 5;
    }
    printf("%d", steps);
    return 0;
}
