#include <stdio.h>
int nsum(int n) {
    return (n * (n+1))/2;
}

int main() {
    int cubes;
    int layer, sum;
    int remainingcubes; 
    scanf("%d", &cubes);
    remainingcubes = cubes;
    layer = 1;
    while (remainingcubes > nsum(layer+1)) {
        layer += 1;
//        printf(" %d => %d : %d \n", remainingcubes, layer, nsum(layer + 1));
        remainingcubes = remainingcubes - nsum(layer);
    }
    printf("%d", layer);
    return 0;
}
