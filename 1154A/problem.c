#include <stdio.h>
int main(int argc, char **argv) {
    long long int t[4];
    long long int temp;
    int i, j;
    scanf("%lld %lld %lld %lld", &t[0], &t[1], &t[2], &t[3]);
    temp = t[0]+t[1]+t[2]+t[3];
    temp = temp / 3;
    for (i = 0; i < 4; i++) {
        if (temp == t[i]) {
            t[i] = -1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (t[i] != -1) {
            printf("%lld ", temp - t[i]);
        }
    }
   // max = (t1 > t2 ? (t1 > t3 ? (t1 > t4 ? t1 : t4) : (t3 > t4 ? t3 : t4)) : (t2 > t3 ? (t2 > t4 ? t2 : t4) : (t3 > t4 ? t3 : t4)));
    return 0;
}
