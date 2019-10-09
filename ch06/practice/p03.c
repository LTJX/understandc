#include <stdio.h>
int cube(int x) {
    int y;
    y = x * x * x;
    return y;
}

int main(void) {
    int n1;
    printf("输入一个整数：\n");
    scanf("%d", &n1);
    printf("该整数的立方为：%d\n", cube(n1));
}