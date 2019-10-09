#include <stdio.h>
int main(void) {
    int no;
    int i;
    int m;
    int n;
    int a = 1;
    printf("正整数：");
    scanf("%d", &no);
    if (no % 5) {
        m = no / 5;
        n = no % 5;
        for (int i = 1; i <= m; i++)
            printf("*****\n");
        while (a <= n) {
            printf("*");
            a++;
        }
        printf("\n");
    } else {
        m = no / 5;
        n = no % 5;
        for (int i = 1; i <= m; i++)
            printf("*****\n");
    }
}