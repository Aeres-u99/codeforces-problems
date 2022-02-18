#include <stdio.h>
int main(int argc, char **argv) {
    int cases, count = 0;
    int arr[1000];
    int high, low;
    int sereja, dima;
    int flag;
    sereja = 0;
    dima = 0;
    flag = 0;
    scanf("%d", &cases);
    do {
        scanf("%d", &arr[count++]);
    } while (getchar() != '\n' && count < cases);
    arr[count];
    high = count - 1;
    low = 0;
    while (cases > 0) {
        if (flag == 0) {
            // Sereja Turn
            if (arr[high] >= arr[low]) {
                sereja += arr[high];
                high = high - 1;
            } else {
                sereja += arr[low];
                low = low + 1;
            }
            flag = 1;
        } else {
            // Dima Turn 
            if(arr[high] >= arr[low]) {
                dima += arr[high];
                high = high - 1;
            } else {
                dima += arr[low];
                low = low + 1;
            }
            flag = 0;
        }
    cases --;
    }
    printf("%d %d", sereja, dima);
    return 0;
}
