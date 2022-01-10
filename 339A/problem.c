#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[100];
    int a[100];
    char t[10];
    scanf("%s",s);
    int i, j = 0, length;
    a[0] = s[0];
    char *token;
    char *r = strdup(s);
    for (i = 1; ; i++){
        token = strsep(&r, "+");
            if (token == NULL){
                break;
            }
    //    printf("%d: %s\n",i, token);
        strcpy(t, token);
        a[j] = atoi(t);
  //      printf("> %d | %s\n",a[j],t);
        j++;
    }
    a[(strlen(s)+1)/2];
    length = (strlen(s)-1)/2;
    for (i = 0; i < length; i++){
//        printf("%d\t",a[i]);
    }
//    printf("%d",length);
    for (i = 0; i < length || i == 0; i++) {
        printf("%d",a[i]);
        if (i < (length - 1) && strlen(s)>1){
            printf("+");
        }
    }
    return 0;
}
