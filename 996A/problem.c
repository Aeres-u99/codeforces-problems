#include <stdio.h>
int main(int argc, char **argv) {
    int count, number;
    scanf("%d", &number);
    count = 0;
    while (number) {
        if (number >= 100) {
            count += number / 100;
            number = number - (number / 100) * 100;
        } else if (number >= 20) {
            count += number / 20;
            number = number - (number / 20) * 20;
        } else if (number >= 10) {
            count += number / 10;
            number = number - (number / 10) * 10;
        } else if (number >= 5) {
            count += number / 5;
            number = number - (number / 5) * 5;
        } else if (number >= 1) {
            count += number / 1 ;
            number = number - (number / 1) * 1;
        } else {
            continue;
        }
    }
    printf("%d", count);
    return 0;
}
