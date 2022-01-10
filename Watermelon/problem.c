#include <stdio.h>
int main() {
    int w;
    scanf("%d",&w);
        if(!((w)&1)&&(w/2)!=1){
    printf("YES");
        } else {
        printf("NO");
    }
    return 0;
}
