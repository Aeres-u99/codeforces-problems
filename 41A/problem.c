#include <stdio.h>
#include <string.h>
int main() {
    int i, j, flag = 0;
    char s1[100], s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    j = strlen(s2);
    for (i = 0; i < strlen(s1); i++){
        if (s1[i] == s2[j-i-1]){
            continue;
        }
        else {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("NO");
    } else {
        printf("YES");
    }
    return 0;
}
