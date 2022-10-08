#include <stdio.h>
int main() {
    int N;
    int n, m, i, j, k;
    int sum, residue;
    scanf("%d", &N);
    while (N) {
        scanf("%d", &n); // Number of elements
                         // Bug here, it works even on n = 5, when it should not.
                         // Ofcourse problem statement explicitly states that n%2 == 0 always
        if ((n/2) % 2 != 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
            m = n/2;
            i = m;
            sum = 0;
            i = 1;
            while (i <= m) {
                // even side of the loop
                printf("%d ", 2*i);
                sum += 2*i;
                i++;
            }
            residue = sum - m*m;
            j = m;
            k = 0;
            while (k < j-1) {
                printf("%d ", 2*k+1);
                k++;
            }
            printf("%d\n",2*(j-1)+1+residue);
        }
        sum = 0;
        residue = 0;
        N --;
    }
}
