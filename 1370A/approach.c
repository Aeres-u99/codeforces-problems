#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int test, m, n, output;
    scanf("%d", &test);
    while (test > 0) {
        scanf("%d", &m);
        m = m / 2;
        n = 2 * m;
        output = gcd(m,n);
        printf("%d\n", output);
        test --;
    }
}
