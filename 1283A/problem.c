#include <stdio.h>
int main() {
    int hours, minutes, cases, time; 
    scanf("%d", &cases);
    while (cases > 0) {
        scanf("%d %d", &hours, &minutes);
        time = (23 - hours) * 60 + 60 - minutes;
        printf("%d\n", time);
        cases --;
    }
    return 0;
}
