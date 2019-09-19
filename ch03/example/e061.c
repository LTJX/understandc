#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int int main(void) {
    int no;
    srand((unsigned)time(NULL));
    printf("请输入一个整数：%d\n", rand() );
    return 0;
}