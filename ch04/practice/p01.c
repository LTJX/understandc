#include <stdio.h>
int main(void) {
    int repeat;
    int no;
    do {

        printf("请输入一个整数：");
        scanf("%d", &no);

        if (no == 0) {
            puts("该整数为0。");
        } else if (no > 0) {
            puts("该整数为正数。");
        } else {
            puts("该整数为负数。");
        }

        printf("要重复一次吗？【YES...0 / NO...9】:");
        scanf("%d", &repeat);
    } while (repeat !=0);
}