#include <stdio.h>
int main() {
    int mishka, chris, cases, d_m, d_c;
    d_m = 0;
    d_c = 0;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d %d", &mishka, &chris);
        if (mishka > chris) {
            d_m ++;
        } else if (chris > mishka) {
            d_c ++;
        } else {
            ;
        }
    cases --;
    }
    if (d_c > d_m) {
        printf("Chris\n");
    } else if (d_m > d_c) {
        printf("Mishka\n");
    } else {
        printf("Friendship is magic!^^");
    }
    return 0;
}
