#include <stdio.h>
#define MAX 100
int main() {
    int population, maximum, burles, welfare[MAX], i = 0;
    int sum;
    scanf("%d", &population);
    welfare[population];
    do {
        scanf("%d", &welfare[i++]);
    } while(getchar() != '\n' && i < population);
    maximum = welfare[0];
    for (i = 0; i < population; i++) {
        if (welfare[i] > maximum) {
            maximum = welfare[i];
        }
    }
    sum = 0;
    if (population > 1) {
        for (i = 0; i < population; i++) {
            sum += maximum - welfare[i];
        }
    }
    printf("%d", sum);
    return 0;
}
