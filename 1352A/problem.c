#include <stdio.h>
int main() {
    int count;
    int number, counter,i,j; 
    int base[5] = {0, 0, 0, 0, 0};
    int nums[5] = {1, 10, 100, 1000, 10000};
    scanf("%d", &count);
    while (count > 0) {
        counter = 0;
        i = 0;
        j = 0;
        int base[4] = {0, 0, 0, 0};
        scanf("%d", &number);
        i = 0;
        while (number > 0) {
            base[i] = number % 10;
            number = number / 10;
            i++;
        }
        for (j = 0; j < i; j++) {
            if (base[j] != 0) {
                counter ++;
            }
        }
        printf("%d\n", counter);
        for (j = 0; j < i; j++) {
            if (base[j] != 0) printf("%d ", base[j] * nums[j]);
        }
        count --;
    }
    return 0;
}
