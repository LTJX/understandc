#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a, b, c, d;
    int max;

    printf("请输入四个整数：\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = a;
    if (max < b) {
        max = b;
    } else if(max<c){
        max = c;
    }

    else if (max < d) {
        max = d;
    }

    if (d > max) {
        max = d;
    }

    printf("四个数中的最大值是：%d\n", max);
    return 0;
}