#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x, y;

    puts("请输入两个整数。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    printf("x的值是y的%d%%\n", 100 * x / y);
	return 0;
}