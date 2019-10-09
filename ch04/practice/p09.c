#include <stdio.h>
int main(void) {
    int no;
    int i = 1;
    printf("正整数：");
    scanf("%d", &no);
    while (1 <= no) {
        if (i % 2) {
            putchar('+');
        } else {
            putchar('-');
        }
        i++;
    }
    if (no > 0) {
        printf("\n");
    }
    return 0;
}