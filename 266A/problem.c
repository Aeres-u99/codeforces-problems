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
    nl = i - 1 >=0 ? s[i-1] : 'C';
    nr = i + 1 < length ? s[i+1] : 'C';
    if ((nl != 'C' && nr != 'C') && (nl == s[i] || nr == s[i])){
        if (nl == s[i] && nr == s[i] && (nl != 'X' && nr != 'X')) {
            counter += 2;
            s[i] = 'X';
            nl = 'X';
            nr = 'X';
            i += 1;
        } else {
            counter ++;
        }
    }
    }
    printf("%d", counter);
    return 0;
}
