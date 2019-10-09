#include <stdio.h>
int main(void) {

    int isRepeat;
    int result;
    double sum = 0;
    int count = 0;
    int input;

    printf("请输入一个数\n");
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        printf("输入第%d个数\n", i + 1 );
        scanf("%d", &input);
        sum += input;
    }
    printf("平均值是%10.2f\n", sum / count );

    return 0;
}