#include <stdio.h>
int main() {
    int a, b, c;
    c = 9;
    a = 10;
    b = a > c ? a : c;
    printf("%d", b);
    return 0;
}
