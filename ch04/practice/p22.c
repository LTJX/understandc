#include <stdio.h>
int main(void) {
    int i , j;
    int max, min;
    int height, width;

    puts("让我们来画一个长方形。");
    printf("边长1："); scanf("%d", &max);
    printf("边长2："); scanf("%d", &min);

    height = min;
    width = max;
    if (max < min) {
        height = max;
        width = min;
    }

    for (i = 1; i <= height; i ++) {
        for (j = 1; j <= width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;

}