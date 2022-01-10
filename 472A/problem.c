#include <stdio.h>
#include <math.h>

int checkPrime(int number) {
    int sq = sqrt(number);
    int counter = 2;
    if ((number % 2 == 0 && number != 2)|| (number % 3 == 0 && number != 3)) {
        return 0;
    }
    while (counter < sq) {
        if (!(counter % number)) {
            return 0;
        }
        counter ++;
    }
    return 1;
}
int main(int argc, char **argv) {
    int a,b,n;
    scanf("%d", &n);
    b = 4;
    a = n - b; // 4 is smallest composite number
//    printf("a: %d b: %d\n", checkPrime(a), checkPrime(b));
    while ((checkPrime(a) == 1) || (checkPrime(b) == 1)) {
        b += 1;
        a = n - b;
    }
    printf("%d %d", a, b);
    return 0;
}
