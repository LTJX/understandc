#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int x;
    srand((unsigned)time(NULL));
    printf("输入一个随机数：%d\n", rand() );
    x = rand();
    judge(x);

    return 0;
}
int judge(int n) {

    n = (n % 20) + 1;
    switch (n) {
    case 1: puts("大吉"); break;
    case 2:
    case 3: puts("中吉"); break;
    case 4:
    case 5:
    case 6: puts("小吉");
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12: puts("吉"); break;
    case 13:
    case 14:
    case 15:
    case 16: puts("未吉"); break;
    case 17:
    case 18:
    case 19: puts("凶"); break;
    case 20: puts("大凶"); break;

    }
    return 0;
}
