#include <stdio.h>
int main(void) {
    int x, y;
    int i;
    printf("开始数值：\n");
    scanf("%d", &x);
    printf("结束数值：\n");
    scanf("%d", &y);
    for (int i = x; x <= y; x += 5 ) {
        printf("%dcm身高的标准体重为%.2fkg\n", x, (double)x / 3 );
    }
}