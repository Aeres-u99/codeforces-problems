#include <stdio.h>
int main() {
    int number, t;
    int count = 0;
    scanf("%d", &number);
    t = number;
    while (t > 0) {
        if (t % 2 == 0) {
            t = t -2;
            count += 1;
        } else {
            t = t - 3;
            count += 1;
        }
    }
    printf("%d\n", count);
    while (number > 0) {
    if (number % 2 == 0) {
        number = number - 2;
        printf("2");
        printf(" ");
    } else {
        number = number - 3;
        printf("3");
        printf(" ");
        }
    }
    return 0;
}
