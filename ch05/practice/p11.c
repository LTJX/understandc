#include <stdio.h>
int main(void) {
    int i, j, k;
    int a[6][2];
    int b[1][2];
    int c[1][1];
    for (i = 0; i < 6; i++) {
        printf("第%d名学生成绩为：\n", i + 1);
        for (j = 0; j < 2; j++) {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("各门课程的总分：\n");



    for (j = 0; j < 2; j++) {
        for (i = 0; i < 6; i++) {

            b[0][j] += a[i][j];
        }
        printf("%d\n", b[0][j]);

    }
    return 0;

}



