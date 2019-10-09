#include <stdio.h>
int main(void) {
    int input;
    int i, j;
    printf("输入整数值：");
    scanf("%d", &input);
    for (int i = 1; i <= input; i++) {
        for (int j = 1; j <= input; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}