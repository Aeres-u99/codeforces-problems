#include <stdio.h>
int main() {
    int price_shovel, change, price;
    int count = 1, i = 2;
    scanf("%d %d", &price_shovel, &change);
    price = price_shovel;
    while (1) {
        if (price%10 == 0) {
            printf("%d", count);
            break;
        }
        else if (price%10 == change) {
            printf("%d", count);
            break;
        } else {
            price = price_shovel * i;
            i ++;
            count ++;
        }
    } 
}
