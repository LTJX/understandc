#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    printf("请输入一个整数：");
    scanf("%d", &x);
    if (x % 2) {
        puts("输入的整数是奇数");
    }

    return 0;
}