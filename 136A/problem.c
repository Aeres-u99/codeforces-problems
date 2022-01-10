#include <stdio.h>
struct gifters {
    int gifter, gifted;
};

int main() {
    struct gifters G[100];
    int n, i, j, count = 0, minimum;
    scanf("%d", &n);
    G[n];
    for (i = 0; i < n; i++) {
        G[i].gifter = i;
    }
    do {
    scanf("%d", &G[count++].gifted);
    } while (getchar() != '\n' && count < n);
/*
    for (i = 0; i < n; i++) {
        printf("Gifter: %d Gifted: %d \n", G[i].gifter+1, G[i].gifted);
    }

*/
    //
    for (j = 0; j < n; j++) {
        minimum = j;
        for (i =0; i < n; i++) {
            if (G[i].gifted < G[j].gifted && G[i].gifted != 101) {
                minimum = i;
            }
        }
        printf("%d ", G[minimum].gifter+1);
        G[minimum].gifted = 101;
        G[minimum].gifter = 101;
    }

    return 0;
}
