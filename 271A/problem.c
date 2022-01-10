#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checker(char *year){
    int i, j;
    for (i = 0; i < strlen(year); i++) {
        for (j = 0; j < strlen(year); j++) {
            if (year[i] == year[j]){
                return 1;
            }
        }
    }
    return 0; 
}


int main() {
    int count = 4, copy, i, original;
    char year[4];
    int year_number[4];
    scanf("%s", year);
    for (i = 0; i < strlen(year); i++) {
//        year_number[i] = atoi(year[i]);
        typeof(year[i]);
    }
    original = year_number[3]*1000 + year_number[2]*100 + year_number[1] * 10 + year_number[0];
    original++;
/*    while(checker(sprintf(year, "%d", original))) {
        original++;
        if (original>9999){
            break;
        }
    }
    printf("%d", original);
 */   return 0;
}
