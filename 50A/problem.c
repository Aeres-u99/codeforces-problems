#include <stdio.h>
int main() {
    int row, column, answer;
    scanf("%d %d",&row, &column);
    answer = (row*column - (row*column)%2) / 2;
    printf("%d", answer);
}
