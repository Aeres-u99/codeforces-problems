#include <stdio.h>
int main() {
    long long int N;
    scanf("%lld", &N);
    if (N%2 == 0) {
        printf("%lld", N/2);
    } else {
        printf("%lld", -1 * (N+1)/2);
    }
    return 0;
}
