#include <stdio.h>
int main(void) {
    int i = 0;
    for (i = 0; i < 2; i++) {
        int j = 5;
        switch (j) {
        case 4: printf("Hello:%d!!!\n", 4 ); break;
        case 5: printf("Hello:%d!!!\n", 5 ); break;
        case 6: printf("Hello:%d!!!\n", 6 ); break;
        }
        printf("Hello World!\n");
    }
    return 0;
}