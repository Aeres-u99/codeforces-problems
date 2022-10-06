#include <stdio.h>

struct Childrens {
    int index;
    int specialization;
};

int main() {
    struct Childrens child[5000];
    int num, i, j, k, teams = 0;
    int c_math = 0, c_sports = 0, c_prog = 0;
    scanf("%d", &num);
    child[num];
    for (i = 0; i < num; i++) {
        scanf("%d", &child[i].specialization);
        if (child[i].specialization == 1) {
            c_prog ++;
        } else if (child[i].specialization == 2) {
            c_math ++;
        } else {
            c_sports ++;
        }
        child[i].index = i;
    }
    if (c_math > 0 && c_sports > 0 && c_prog > 0){
        teams = (c_math < c_sports ) ? (c_math < c_prog ? c_math : c_prog) : (c_sports < c_prog ? c_sports : c_prog);
    }
    printf("%d\n", teams);
    for (i = 1; i <= teams; i++) {
        k = 1;
        while (k < 4) {
        for (j = 0; j < num; j++) {
            if(child[j].specialization == k) {
                k++;
                child[j].specialization = 0;
                printf("%d ", child[j].index+1);
                break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
