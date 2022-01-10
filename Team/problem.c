#include <stdio.h>
int main() {
    int cases, t1,t2,t3, sum,count = 0;
    scanf("%d", &cases);
    while (cases) {
        scanf("%d %d %d",&t1,&t2,&t3);
        sum = t1+t2+t3;
        if (sum > 1) {
            count +=1;
        }
        cases --;
    }
    printf("%d",count);
    return 0;
}
