#include <stdio.h>
#include <string.h>
int main() {
    int n, a[1000], b[1000];
    int count, i, j; 
    int casecount, ul, bl;
    count = 0;
    casecount = 0;
    scanf("%d", &n);
    i = 0;
    do {
        scanf("%d", &a[i++]);
    } while (getchar() != '\n' && i < n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i] == a[j] && i != j) {
                count = i > j ? i : j;
                a[count] = -1;
            }
        }
    }
    j = 0;
    for (i = 0; i < n; i++){
        if (a[i] != -1){
            b[j] = a[i];
            j ++;
        }
    }
    n = j;
/*
    for (i =0; i < n; i++) {
        printf("- %d -", b[i]);
    }
*/
    memcpy(a, b, sizeof(b));

    for (i = 1; i < n; i++) {
        if (a[i]!= -1){
        ul = a[i];
        bl = a[i];
        } else {
            continue;
        }
        for (j = 0; j <= i; j++) {
            if (a[j] < ul && a[j] != -1){
                ul = a[j];
                //printf("ul: %d || a[j] = %d a[i] %d \n",ul, a[j], a[i]);
            }
            if (a[j] > bl && a[j] != -1){
                bl = a[j];
                //printf("bl: %d || a[j] = %d a[i] %d \n",bl, a[j], a[i]);
            }
        }
        if ((ul == a[i] || bl == a[i]) && (a[i] != -1)){
            //printf("CI\n");
            casecount ++;
        }
    }
    printf("%d\n", casecount);
    return 0;
}
