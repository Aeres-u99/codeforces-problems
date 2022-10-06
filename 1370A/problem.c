#include <stdio.h>
#include <stdlib.h>

static int __gcd(int a, int b)
{
    if (b == a) {
        return -1;
    }
    if (b == 0)
        return a;
    return __gcd(b, a % b);
     
}

int main() {
    int n, number;
    int i,j,k, counter;
    //int output[10000];
    int output = 0;
    scanf("%d", &n);
    while (n > 0) {
        scanf("%d", &number);
        for (i=1; i <= number; i++) {
            for (j = i; j <= number; j++) {
                if (__gcd(i,j) > output) {
                    output = __gcd(i,j);
                }
            }
        }
       printf("%d\n", output);
        n--;
    }
}
