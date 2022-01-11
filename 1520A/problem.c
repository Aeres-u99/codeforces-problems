#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
int main() {
    int t;
    char* ptr;
    char previous;
    int n, i = 0, count = 0;
    int flag[26];
    scanf("%d", &t);
    while (t > 0) {
        count = 0;
        scanf("%d", &n);
        ptr = (char*)malloc((n+1) * sizeof(char));
        scanf("%s", ptr);
//        printf("%s", ptr);
        // initialize flag
        for (i = 0; i < 26; i++) {
            flag[i] = false;
        }
        previous = '0';
        for (i = 0; i < n; i++) {
            // if flag is set then increase the count
            if (flag[(ptr[i]) - 65] == true && ptr[i] != previous){
                count ++;
            } else {
                flag[(ptr[i]) - 65] = true;
            }
            previous = ptr[i];
        }
        printf("\n");
//        for (i = 0; i < 26; i++) {
//            printf("|%d ", flag[i]);
//        }
//        printf("\n count: [%d]", count);
        if (count == 0) {
            printf("Yes");
        } else {
            printf("No");
        }
        t --;
        free(ptr);
    }
    return 0;
}
