#include <stdio.h>
int main(void) {
    int i = 0;
    for (i = 0; i < 5; i++) {
        if (i == 2) {
            break;
            printf("我没有被打印出来!\n");
        }
        printf("i=%d\n", i );
    }
    printf("已经跳出循环\n");
    return 0;
}