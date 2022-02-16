#include <stdio.h>
#define true 1
#define false 0
int check(int number) {
    int digit;
    if (number % 3 == 0) {
        return false;
    } 
    else {
        if (number % 10 == 3) {
            return false;
        }
    }
    /*else {
        while (number) {
            digit = number % 10;
            if (digit == 3) {
                return false;
            }
            number = number / 10;
        }
    }
    */

    return true;
}

int main() {
    int DS[2000];
    int number, cases, terms, answer, i;
    number = 1;
    for (i = 0; i < 2000; i++) {
        if(check(number)){
            DS[i] = number;
            number += 1;
            
        } else {
            number += 1;
            i --;
        }
    }
    scanf("%d", &cases);
    while (cases) {
        scanf("%d", &terms);
        printf("%d\n", DS[terms - 1]);
        cases --;
    }
    return 0;
}
