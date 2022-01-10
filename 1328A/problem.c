#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char **argv) {
    int a,b,cases;
    int t[10000];
    int m;
    scanf("%d", &cases);
    t[cases];
    while (cases > 0) {
    scanf("%d %d", &a, &b);
    m = b * ((a - (a%b))/b) - a;
    if (m < 0) {
        m = b + m;
    }
    printf("%d\n", m);
    cases --;
    }
    return 0;
}
