#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x;
    puts("输入一个整数：");
    scanf("%d", &x);
    if (x % 3 == 0) {
        puts("该数能被3整除");
    } else if ( x % 3 == 1) {
        puts("该数被3整除余1");
    } else {
    	puts("该整数被3整除余2");
    }

    // else (x % 3 == 2) {
    //     puts("该数被3整除余2");
    // }
    return 0;
}