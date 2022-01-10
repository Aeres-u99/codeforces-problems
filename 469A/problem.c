#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i, j;
    i = 0;
    j = 0;
    char p[200],a[200], dump[200];
    int c = 0;
    char *token;
    scanf("%d", &n);
    while ((getchar()) != '\n');
    p[2*n+3];
    a[2*n+3];
    fgets(p,2*n+3,stdin);
    // parse out spaces
    for (i = 0, c = 0; i < strlen(p); i++){
        if (p[i] != ' ') {
            dump[c] = p[i];
            c++;
        }
    }
    // fix p
    for (i = 0; i < strlen(dump); i++) {
        p[i] = dump[i];
    }
    //input a
    fgets(a, 2*n+3, stdin);
    // parse out spaces
    for (i = 0, c = 0; i < strlen(p); i++){
        if (a[i] != ' ') {
            dump[c] = a[i];
            c++;
        }
    }
    p[n] = '\0';
    a[n] = '\0';
    dump[n] = '\0';
    for (i = 0; i < strlen(dump); i++) {
        printf("%c ", dump[i]);
    }


    // fix a
    for (i = 0; i < strlen(dump); i++) {
        a[i] = dump[i];
    }
    for (j = 0; j < n; j++) {
        dump[j] = j+1+'0';
    }
   
    for (i = 0; i < strlen(p); i++) {
        for (c = 0; c < strlen(dump); c++) {
            if (p[i] == dump[c]) {
                dump[c] = '0';
        }
    }}
    
    for (i = 0; i < strlen(a); i++) {
        for (c = 0; c < strlen(dump); c++) {
            if (a[i] == dump[c]) {
                dump[c] = '0';
        }
    }}
    for (i = 0; i < strlen(dump); i++) {
        printf("%c ", dump[i]);
    }

    for (i = 0; i < strlen(dump); i++) {
        if(dump[i] == '0') {
            continue;
        } else {
            printf("Oh, my keyboard!");
            exit(0);
        }
    }
    printf("I become the guy.");
    return 0;
}
