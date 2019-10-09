#include <stdio.h>
int main(void) {
    int no;
    int m;
    int i = 0;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        m = no;
        while (no > 0) {
            no /= 10;
            i++;
        }
    } while (no > 0);
    printf("%d的位数是：%d\n", m, i );
}