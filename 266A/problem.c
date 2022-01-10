#include <stdio.h>
int main() {
    int length, counter = 0, count, i = 1, flag = 1;
    char s[50];
    scanf("%d", &count);
    s[count];
    length = count;
    scanf("%s", s);
    while (i < length-1) {
        if (s[i] == s[i - 1] && !flag) {
            counter ++;
            flag = 0;
            i += 1;
        } else if (s[i] == s[i + 1]) {
            counter ++;
            flag = 1; // skip previous
            i += 2; // skip the next boi
        } 
        else {
            i ++;
        }
    }
    printf("%d", counter);
    return 0;
}
