#include <stdio.h>
int main() {
    int firstterm, count, amount, borrow, sum = 0, i;
    scanf("%d %d %d", &firstterm, &amount, &count);
    
    for (i=0; i<count; i++) {
        sum += firstterm*(i+1);
    }
    borrow = sum - amount;
    if (borrow < 0) {
        borrow = 0;
    }
    printf("%d", borrow);
    return 0;
}
