#include <stdio.h>
int main(int argc, char const *argv[]) {
    int height;

    printf("请输入您的身高："); scanf("%d", &height);

    printf("您的标准体重是%.1f公斤\n", (height - 100) * 0.9);

    return 0;
}