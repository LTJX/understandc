#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x ;

    printf("请输入一个整数：");
    scanf("%d", &x);

    printf("该整数减去6的结果是%d\n", x - 6);

    return 0;
}