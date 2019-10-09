#include <stdio.h>
int main(void) {
    int input1, input2;
    int repeat;
    int sum = 0;
    int s;
    printf("输入两个整数\n");
    scanf("%d %d", &input1, &input2);
    do {
        if (input1 < input2) {
            s = input1 + 1;
            while (s < input2) {
                sum = sum + s;
                s++;
            }

        } else {
            s = input2 + 1;
            while (s < input1) {
                sum = sum + s;
                s++;
            }
        }
        printf("%d\n", sum );

        printf("要重复一次吗？【YES...0 / NO...9】:");
        scanf("%d", &repeat);

    } while (repeat != 0);

    return 0;
}