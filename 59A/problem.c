#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char str[100];
    char test;
    int count_upper = 0, count_lower = 0, i;
    scanf("%s",str);
    for (i = 0; i < strlen(str); i++) {
        test = str[i];
        isupper(test) ? count_upper++ : count_lower++;
    }
    if (count_upper > count_lower) {
        for (i = 0; i < strlen(str); i++) {
            str[i] = toupper(str[i]);
        }
    } else if (count_lower > count_upper) {
        for (i = 0; i < strlen(str); i++) {
            str[i] = tolower(str[i]);
        }
    } else {
        for (i = 0; i < strlen(str); i++) {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}
