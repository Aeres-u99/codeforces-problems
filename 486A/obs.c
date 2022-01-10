#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    (N%2 == 0) ? printf("%d", N/2):printf("%d", -1 * (N+1)/2);
    return 0;
}
