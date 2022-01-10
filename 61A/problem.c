#include <stdio.h>
#include <string.h>

int main() {
    char b1[100], b2[100];
    char answer[100];
    int i, length = 0, carry = 0;
    scanf("%s", b1);
    scanf("%s", b2);
    length = strlen(b1);
    b1[length];
    b2[length];
    answer[length];
    for(i = length; i >= 0; i--){
        b1[i] = b1[i] - '0';
        b2[i] = b2[i] - '0';
        carry += b1[i] & b2[i];
        if (b1[i]+b2[i]+carry > 1){
            answer[i] = b1[i] ^ b2[i];
            carry = 1;
        } else {
            answer[i] = b1[i] ^ b2[i];
        }
        carry = b1[i] & b2[i];
    }
    for (i = 0;i < length; i++){
        printf("%d",answer[i]);
    }
    return 0;
}
