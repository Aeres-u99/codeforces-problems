#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int count, i, j = 0, k, length;
    uint32_t flag = 0;
    char str[100];
    scanf("%d", &k);
    while (getchar() != '\n');
    fgets(str, 100, stdin);
    length = strlen(str);
    for (i = 0; i < length; i++){
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
//             printf("[%c]", str[i]);
            k = str[i] - 65;
//             printf(">> %d\n", str[i]);
                //(str[i] - '0');
            j = 1 << k;
            flag = flag | j; 
//             printf("\t%x :: %x :: %x\n",j, k, flag);
        }
    }
    if (flag == 0x3ffffff) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
