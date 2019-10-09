#include <stdio.h>
int main(int argc, char const *argv[]) {
	
    int isRepeat;
    do {
        int input;
        printf("输入一个整数\n");
        scanf("%d", &input);
        if (input % 2 == 0) {
            printf("输入的是偶数\n");
        }

        else {
            printf("输入的是奇数\n");
        }
        printf("是否重复\n");
        scanf("%d", &isRepeat);
    } while (isRepeat != 0);

    return 0;
}