#include <stdio.h>
int main(void) {

    int input;
    int sum = 0;
    int i;

    printf("请输入一个整数：\n");
    scanf("%d", &input);
    do {
        i = input % 10;
        input = input / 10;
        sum = sum + i;

    } while (input > 1);
        printf("%d\n", sum );
    return 0;
}