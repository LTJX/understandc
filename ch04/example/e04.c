#include <stdio.h>
int main(void) {
    int isRepeat;
    int result;
    int sum = 0;
    int count = 0;
    int input;
    do {
        printf("输入一个整数\n");
        scanf("%d", &input);
        count++;
        printf("结束了吗\n");
        scanf("%d", &isRepeat);
    } while (isRepeat != 0);
    printf("平均值是%.f\n",(float) sum / count);

    return 0;
}