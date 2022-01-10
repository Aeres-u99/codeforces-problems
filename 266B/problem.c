#include <stdio.h>
#include <string.h>

int swap(char *arr, int position) {
    char temp;
    temp = arr[position];
    arr[position] = arr[position+1];
    arr[position+1] = temp;
    return 0;
}

int main() {
    int position, length, count, times;
    char queue[100];
    scanf("%d %d",&count, &times);
    scanf("%s", queue);
    length = strlen(queue);
    queue[length];
    while (times){
        for (position = 0; position < length; position++) {
            if (queue[position] == 'B') {
                if (queue[position+1] == 'G') {
                    swap(queue, position);
                    position ++;
//                    break;
                }
            }
        }
        times --;
    }
    printf("%s", queue);
    return 0;
}
