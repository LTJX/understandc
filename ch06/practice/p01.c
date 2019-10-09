#include <stdio.h>
int min2(int a, int b) {
    int min;
    min = a;
    if (a > b) {
        min = b;
    }
    return min;
}
int main(void) {

    int n1, n2;
    puts("请输入两个整数：");
    printf("整数1:\n"); scanf("%d", &n1);
    printf("整数2:\n"); scanf("%d", &n2);
    printf("较小的整数是%d.\n", min3(n1, n2) );
    return 0;
}

