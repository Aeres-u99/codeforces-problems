#include <stdio.h>
#include <string.h>
int main() {
    int count,i, anton = 0, danik = 0;
    char s[100000];
    scanf("%d", &count);
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++){
        if(s[i] == 'A') {
            anton++;
        } else if (s[i] == 'D') {
            danik++;
        } else {
            break;
        }
    }
    if (anton > danik) {
        printf("Anton");
    } else if (danik > anton) {
        printf("Danik");
    } else {
        printf("Friendship");
    }
    return 0;
}
