#include <stdio.h>

int max_remainder(int x, int y, int n) {
    while (1) {
        if ((n-y)%x == 0) {
            return n;
        } else {
            n --;
        }
    }
}

int main() {
    int testcases;
    int x,y,n,answer;
    scanf("%d", &testcases);
    while (testcases > 0) {
        scanf("%d %d %d", &x, &y, &n);
        answer = max_remainder(x,y,n);
        printf("%d\n", answer);
        testcases --;
    }
}
