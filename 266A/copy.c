/*
 * Any Code with name copy.c is basically the code that I was unable to solve
 * and I saw a python implementation and ported it to C.
 * Yes I cheated Yes I am guilty Please don't bonk me
 */
#include <string.h>
#include <stdio.h>
int main() {
    int length, counter = 0, count, i = 1, flag = 1;
    char s[50];
    char nl, nr;
    scanf("%d", &count);
    s[count];
    length = count;
    scanf("%s", s);
    for (i = 0; i < length - 1; i++) {
        if (s[i] == s[i+1]){
            counter ++;
        }
    }
    printf("%d", counter);
    return 0;
}


