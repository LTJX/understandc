#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y;
    printf("输入两个数：\n");
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y) {
        printf("较大的数为x：%d\n", x);
        printf("较小的数为y：%d\n", y);
    } else if (x < y) {
        printf("较大的数为y：%d\n", y);
        printf("较小的数为x：%d\n", x);
    } else {
        puts("两个数相等");
    }
    return 0;
}