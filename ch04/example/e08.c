#include <stdio.h>
int main(void) {
    int i = 0;
    int j = 0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 2) {
                break;
            }
            printf("Hello:%d\n", j);
        }
        printf("World:%d\n", i );
    }
    return 0;
}