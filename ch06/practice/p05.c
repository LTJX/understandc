#include <stdio.h>
int sumup(int n) {
    int i;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;

    }
    return sum;
}
int main(void) {
    int input;
    printf("求1到n之间所有整数的和：\n");
    printf("整数:");
    scanf("%d", &input);
    printf("和为：%d\n", sumup(input) );
}