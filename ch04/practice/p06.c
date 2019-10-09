#include <stdio.h>
int main(void) {
    int i, no;
    int x;
    printf("请输入一个正整数：");
    scanf("%d", &no);
    i = 0;
    while (i <= no) {
        i = i + 2;
        printf("%d\n", i );
    }
    printf("\n");
    return 0;
}