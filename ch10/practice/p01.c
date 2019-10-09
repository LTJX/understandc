#include <stdio.h>

void adjust_point(int *n) {
    if (*n < 0) {
        *n = 0;
    } else if (*n > 100) {
        *n = 100;
    }

}
int main(void) {
    int x;
    printf("输入一个整数:");
    scanf("%d", &x);
    adjust_point(&x);
    printf("得到的结果为：%d\n", x );
    return 0;
}