#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[5][5],i,j, pos_r, pos_c, moves;
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++) {
            scanf("%d",&array[i][j]);
            if (array[i][j] == 1) {
                pos_r = i;
                pos_c = j;
            }
        }
    }
    moves = abs(2 - pos_r) + abs(2 - pos_c);
    printf("%d", moves);
    return 0;
}
