#include<stdio.h>
int main() {
    int cases, length, i = 0;
    int a[50];
    int mrmax;
    scanf("%d", &cases);
    while (cases) {
//        printf("length:");
        scanf("%d", &length);
        a[length];
        do {
            scanf("%d", &a[i++]);
        } while(getchar() != '\n' && i < length);
        mrmax = a[0];
        for (i = 0; i < length; i++) {
            if (a[i] >= mrmax) {
                mrmax = a[i];
//                printf("%d", mrmax);
            }
        }
        for (i = 0; i < length; i++) {
            a[i] = mrmax - a[i];
//            printf("%d ", a[i]);
        }
        mrmax = a[0];
        for (i = 0; i < length; i++) {
            if (a[i] >= mrmax) {
                mrmax = a[i];
            }
        }
        printf("%d\n", mrmax);
        cases --;
        i = 0;
    }
    return 0;
}
