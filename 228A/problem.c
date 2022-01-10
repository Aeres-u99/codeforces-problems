#include <stdio.h>
int main() {
    int color[4],i,j,count = 0;
    for (i=0;i < 4; i++){
        scanf("%d", &color[i]);
    }
    for (i=0;i<4;i++){
        for (j = i+1;j<4;j++){
            if (color[i] == color[j] && color[i] != 0){
                count++;
                color[i] = 0;
               // color[j] = 0;
            }
        }
    }
    printf("%d", count);
    return 0;
}
