#include <stdio.h>
int main() {
    int bluesocks, redsocks;
    int differentsocks, samesocks;
    scanf("%d %d", &redsocks, &bluesocks);
    differentsocks = (bluesocks < redsocks) ? bluesocks : redsocks;
    samesocks = (bluesocks < redsocks) ? (redsocks - bluesocks) / 2 : (bluesocks - redsocks) / 2;
    printf("%d %d", differentsocks, samesocks);
    return 0;
}
