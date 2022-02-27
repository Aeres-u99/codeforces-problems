#include <stdio.h>
int main() {
    int cases, a, b, diff, steps, flag, x;
    steps = 0;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d %d", &a, &b);
        diff = (b > a) ? b-a : a-b;
        flag = diff;
        steps = (diff - diff % 10) / 10;
        if (flag - steps*10 > 0){
            steps ++;
        }
        printf("%d\n", steps);
        steps = 0;
        cases --;
    }
    return 0;
}
