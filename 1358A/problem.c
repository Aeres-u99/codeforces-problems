#include <stdio.h>
int main() {
    int n, m, cases;
    int rem, answer;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d %d", &n, &m);
        rem = (n*m) % 2;
        answer = ((n*m) - rem ) / 2 + rem;
        printf("%d\n", answer);
        cases --;
    }
    return 0;
}
