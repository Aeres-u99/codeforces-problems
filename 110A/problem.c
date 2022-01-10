#include <stdio.h>
#include <string.h>
int main() {
    int count4 = 0, count7 = 0, i, j, digit;
    long long int number;
    scanf("%llu",&number);
    while ((long long int) number > 0) {
        digit = (long long int) number % 10;
//        printf("%d", digit);
        if (digit == 4) {
            count4++;
        }
        if (digit == 7) {
            count7++;
        }
        number = number / 10 ;
    }
//    printf("%d", count4+count7);
    if (count4+count7 == 4 || count4+count7 == 7) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
