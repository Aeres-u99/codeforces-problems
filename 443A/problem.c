#include <stdio.h>
#include <string.h>
int main() {
    char input[1000], output[1000];
    int i, j, k, count = 0;
    fgets(input, 1000, stdin);
    j = 0;
    for (i = 0; i < strlen(input); i++) {
        if (input[i] == '}' ||input[i] == ',' ||input[i] == '{' || input[i] == ' ') {
            continue;
        } else {
            output[j] = input[i];
            j+=1;
        }
    }
    output[j-1]='\0';
    for (k = 0; k < strlen(output); k++) {
//        printf("... %c\n", output[k]);
    }


    for (j = 0; j < strlen(output); j++) {
//        printf("> %c\n", output[j]);
        if (output[j] != '0') {
        for (i = 0; i < strlen(output); i++) {
//                printf("%c ::> %c\n", output[j], output[i]);
            if (output[i] == output[j] && i!=j && output[i] != '0' && output[j] != '0') {
                output[i] = '0';
                }
            }
        count ++;
        }
    }
    printf("%d", count);
    return 0;
}
