#include <stdio.h>
int main(void) {
    int no;
    int i = 1;
    printf("正整数：");
    scanf("%d", &no);
    while (i <= no) {
        printf("*\n");
        i++;
    }
    if (i <= 0) {
        printf("\n");
    }
    return 0;
}