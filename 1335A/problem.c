#include <stdio.h>
int main() {
    int testcases, N, output;
    scanf("%d", &testcases);
    while (testcases > 0) {
        scanf("%d", &N);
        if(N%2 == 0){
            output = N/2 - 1;
        } else {
            output = N / 2;
        }
        printf("%d\n", output);
        testcases --;
    }
    return 0;
}
