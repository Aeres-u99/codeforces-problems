#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int similarity = 0, i, j;
    char name[100];
    scanf("%s", name);
    for (i = 0; i< strlen(name); i++) {
        for (j = i+1; j < strlen(name); j++){
                if (name[i] == name[j] && name[i] != 1){
                    name[j] = 1;
                }
            }
    }
    for (i = 0; i < strlen(name); i++) {
        if(toupper(name[i]) >= 65 && toupper(name[i]) <= 90){
            similarity+=1;
        }
    }
//    printf("%d", similarity);
//    printf("%s", name);
    if (!((similarity)%2)) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
    return 0;
}
