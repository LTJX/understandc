#include <stdio.h>
int min3(int a, int b, int c) {
    int min;
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}



int main(void) {

    int n1, n2, n3;
    printf("求三个整数的最小值：\n");
    printf("整数1:\n"); scanf("%d", &n1);
    printf("整数2:\n"); scanf("%d", &n2);
    printf("整数3:\n"); scanf("%d", &n3);
    printf("最小值为：%d\n", min3(n1, n2, n3) );
}
