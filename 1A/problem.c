#include <stdio.h>
int main() {
    int n,m,a,t1,t2,t3,count;
    scanf("%d %d %d",&n,&m,&a);
    if (a >= n && a >= m) {
        printf("1");
    } else {
        t1 = (n-a) % a; 
        t2 = (m-a) % a;
        t3 = (t2 > t1) ? t2 : t1;
        count = (t3 * t3) / (a * a);
        printf("%d",count);
    }
    return 0;
}
