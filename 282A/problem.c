#include <stdio.h>
int main() {
    int instructions;
    int sum = 0;
    char operation[3];
    scanf("%d",&instructions);
    while (instructions) {
        scanf("%s",operation);
        if (operation[1] == '-') {
            sum -= 1;
        } 
        if (operation[1] == '+') {
            sum += 1;
        }
        instructions --;
    }
    printf("%d",sum);
    return 0;
}
