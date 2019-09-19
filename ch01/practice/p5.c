#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x ;

    printf("请输入一个整数：");
    scanf("%d", &x);

    printf("该整数加上12的结果是%d\n", x + 12);
    return 0;
}