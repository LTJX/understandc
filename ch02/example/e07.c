#include <stdio.h>
int main(int argc, char const *argv[]) {
    double x, y;

    puts("请输入两个数。");
    printf("实数x："); scanf("%lf", &x);//小写英文字母l
    printf("实数y："); scanf("%lf", &y);

    printf("x + y = %f\n", x + y);
    printf("x - y = %f\n", x - y);
    printf("x * y = %f\n", x * y);
    printf("x / y = %f\n", x / y);
    return 0;
}