#include <stdio.h>
int main() {
    int number, operations, result;
    int counter;
    scanf("%d %d",&number, &operations);
    while (operations) {
        if (number % 10 != 0){
            number --;
            operations--;
        } else {
            number = number / 10;
            operations --;
        }
    }
    printf("%d", number);
    return 0;
}
