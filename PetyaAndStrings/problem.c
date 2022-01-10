#include <stdio.h>
#include <ctype.h>

int strcmpi(char *primary,char *secondary) {
    int i, diff;
    for (i=0; primary[i] != '\0'; i++){
        diff = toupper(primary[i])-toupper(secondary[i]);
//        printf("diff: %d %c %c\n", diff, primary[i], secondary[i]);
        if (diff == 0){
//        printf("diff: %d %c %c\n", diff, primary[i], secondary[i]);
            continue;
        } else  {
            if (diff < 0) {
                return -1;
            }
            if (diff > 0) {
                return 1;
            }
        }
    }
    return 0;
}


int main() {
    int ret;
    char primary[100], secondary[100];
    scanf("%s", primary);
    scanf("%s", secondary);

    ret = strcmpi(primary, secondary);
    printf("%d", ret);
    //ret == 0 ? printf("0") : (ret < 0) ? printf("1") : printf("-1");
    return 0;
}
