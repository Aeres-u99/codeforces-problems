#include <stdio.h>
int main() {
    int n, p[100], i, sum = 0;
    float percentage;
    scanf("%d", &n);
    p[n];
    for (i = 0; i < n; i++){
        scanf("%d",&p[i]);
        sum += p[i];
    }
    percentage = (float) sum / n;
    printf("%f", percentage);
    return 0;
}
