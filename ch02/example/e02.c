#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    scanf("%d", &x);
    printf("x=%d\n", x);
    printf("该整数最后一位为：%d\n", x % 10 );
    return 0;
}