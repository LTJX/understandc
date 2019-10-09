#include <stdio.h>
int main(void) {
    int i , n;
    int a = 0;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        while (n % i == 0) {
            printf("%d ", i);
            a++;

        }
    }
    printf("共有%d个约数\n", a);
    printf("\n");
    return 0;
}