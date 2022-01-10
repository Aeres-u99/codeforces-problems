#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], exor[100];
    int i;
    scanf("%s", a);
    scanf("%s", b);
    for (i = 0; i < strlen(a); i++) {
        exor[i] = (a[i] - '0') ^ (b[i] - '0');
    }
    
    for (i = 0; i < strlen(a); i++) {
        printf("%d", exor[i]);
    }
    return 0;
}
