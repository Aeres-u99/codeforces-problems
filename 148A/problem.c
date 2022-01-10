#include <stdio.h>
int main() {
    int k,l,m,n,d;
    int i,j, count, total;
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);
    count = 1;
    for (i = 1; i <= d; i++) {
        if (!(i%k) || !(i%l) || !(i%m) || !(i%n)) {
            continue;
        } else {
            count ++;
        }
    }
    printf("%d", d - count + 1);
    return 0;
}

