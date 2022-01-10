#include <stdio.h>
int main(int argc, char **argv) {
    int a,b,c,d, max;
    a = 7;
    b = 12;
    c = 11;
    d = 10;
    max = b > a ? (b > c ? b : c) : (a > c ? a : c);
    max = max > d ? max : d;
    printf("%d", max);
    return 0;
}
