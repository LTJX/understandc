#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x, y, z;
    int min;

    printf("请输入三个整数：\n");
    scanf("%d %d %d", &x, &y, &z);

    min = x;

    if (y < min) {
        min = y;
    }

    if (z < min) {
        min = z;
    }

    printf("三个数中的最小值为%d\n", min);
  
    return 0;
}