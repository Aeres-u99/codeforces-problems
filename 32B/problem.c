#include <stdio.h>
#include <string.h>
int main(int argc, char **argv) {
    char s[201];
    int i;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == '.') {
            printf("0");
        }
        if (s[i] == '-') {
            if (s[i+1] == '.') {
                printf("1");
                i = i + 1;
            }
            else if (s[i+1] == '-') {
                printf("2");
                i = i + 1;
            }
        }
    }
    
    return 0;
}
