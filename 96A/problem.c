#include<stdio.h>
int main() {
    long long int postion,backup;
    int number;
    int count1 = 0, count2 = 0, flag = 1;
    scanf("%ld",&postion);
    backup = postion;
    while (backup > 0) {
        number = backup % 10;
        backup = backup / 10;
        if (number == 1 && flag == 1) {
            count1 ++;
            flag = 1;
        } else if (number == 1 && flag == 0){
            flag = 1;
        } else if (number == 0 && flag == 1){
            flag = 0;
        } else if (number == 0 && flag == 0){
            count2++;
        } else {
            printf("");
        }
    }
    // just a comment
    if(count1 > 7 || count2 > 7) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
