#include <stdio.h>
#include <stdlib.h>

int compare( const void* a, const void* b)
{
   int int_a = * ( (int*) a );
   int int_b = * ( (int*) b );

   // an easy expression for comparing
   return (int_a > int_b) - (int_a < int_b);
}

int main() {
    int t, size, i, j, flag = 1;
    int a[50];
    scanf("%d", &t);
    while (t > 0) {
    scanf("%d", &size);
    a[size];
    flag = 1;
    for (i=0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, size, sizeof(int), compare);
    for (j=size-1; j > 0; j--) {
        if ((a[j] - a[j-1]) > 1) {
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    t --;
    }
    return 0;
}
