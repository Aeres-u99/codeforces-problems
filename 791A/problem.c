#include <stdio.h>
int main() {
    int limak, bob, count = 0;
    scanf("%d %d", &limak, &bob);
    while (!(limak > bob)) {
        count++;
        limak = limak * 3;
        bob = bob * 2;
    }
    printf("%d", count);
    return 0;
}
