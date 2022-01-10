#include <stdio.h>
#include <string.h>

int main() {
    int cases, count,length;
    char word[100];
    scanf("%d",&cases);
    while (cases) {
        scanf("%s", word);
        length = strlen(word);
        if (length>10) {
            printf("%c%d%c\n",word[0],length-2,word[length-1]);
        } else {
            printf("%s\n",word);
        }
        cases --;
    }
    return 0;
}
