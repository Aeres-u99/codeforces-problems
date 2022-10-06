#include <stdio.h>
#include <stdlib.h>

int cmp( const void* a, const void* b)
{
   int int_a = * ( (int*) a );
   int int_b = * ( (int*) b );

   // an easy expression for comparing
   return (int_a > int_b) - (int_a < int_b);
}

int main() {
    int cases;
    int atheletes, a[1000];
    int i,j,minimum;

    scanf("%d", &cases);
    while (cases) {
        i = 0; j = 0; atheletes = 0;
        scanf("%d", &atheletes);
        for (i = 0; i < atheletes; i++) {
            scanf("%d", &a[i]);
        }
        // Sort the array.
        qsort(a, atheletes, sizeof(int), cmp);
        minimum = a[1] - a[0];
        for (i = 0, j = 1; i < atheletes; i++, j++) {
//            printf("%d %d :: %d %d -> %d\n", i,a[i], j, a[j], a[j] - a[i]);
            if (i != atheletes - 1 && ((a[j] - a[i]) <= minimum)) {
                minimum = a[j] - a[i];
            }
        }
        printf("%d\n", minimum);
        cases --;
    }
}
