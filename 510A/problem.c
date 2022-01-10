#include <stdio.h>
#define True 1
#define False 0
int main(int argc, char **argv) {
    int row, columns; 
    int flag = True;
    int i, j, k;
    int r = 0;
    scanf("%d %d", &row, &columns);
    while (r < row) {
        if (!(r % 2)) for (i = 0; i < columns; i++) {
            printf("#");
        } 
        if (r % 2){
            flag = flag ^ True; // toggle Flag
            if (flag) { 
                printf("#");
            }
            for (i = 0; i < columns - 1; i++) { printf("."); } // print ...
            if (!flag) { 
                printf("#");
            }
        }

        printf("\n");
//        printf(" > %d\n", flag);
        r++;
    }
    return 0;
}

