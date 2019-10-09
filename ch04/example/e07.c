#include <stdio.h>
int main(void) {
    int i;
    for (i = 0; i < 5; i++) {
        if (i == 2) {
            continue;
            printf("我没有被打印出来!\n");
        }
        printf("i=%d\n", i );
    }
    return 0;
}