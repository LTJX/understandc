#include <stdio.h>
int main(void) {
    int i , n;

    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1) {
        printf("%d ", i * i );
    }
    printf("\n");

    return 0;
}