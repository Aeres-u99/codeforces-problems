#include <stdio.h>
int countdigits(int number) {
    int temp = number, count = 0;
    while (temp) {
        temp = temp / 10;
        count ++;
    }
    return count;
}
int main() {
    int cases, number;
    int digit, position, residue;
    int count;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d", &number);
        /* 444
         * 1. find out the digit: 4
         * 2. find out digit - 1: 3
         * 3. [2] * 10 + [position]
         * 4. position = 4 - (4 % [1])
         * */
        digit = number % 10;
        count = countdigits(number);
        residue = digit - 1;
        position = residue * 10 + ((count * (count + 1)) / 2);
        printf("%d\n", position);
        cases --;
    }
    return 0;
}
