#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))
int main(void) {
    int x, y;

    printf("请输入两个整数：\n");
    printf("整数1:"); scanf("%d", &x);
    printf("整数2:"); scanf("%d", &y);
    printf("较大的数为%d\n", max(x, y) );

    return 0;
}