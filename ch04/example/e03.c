#include <stdio.h>
int main(int argc, char const *argv[]) {
    int input;
    int x;

    do {
        printf("输入一个整数\n");
        scanf("%d", &input);
        if (input > 0) {
            printf("输入的是正数\n");
        } else if (input < 0) {
            printf("输入的是负数\n");
        } else {
            printf("输入的是0\n");
        }
        printf("是否继续\n");
        scanf("%d", &x);
    } while (x != 0);
    return 0;
}