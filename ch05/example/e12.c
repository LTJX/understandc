#include <stdio.h>
#define NUMBER 3
int main(void) {
    int i;
    int stu[NUMBER];

    printf("请输入学生分数：");
    for (int i = 0; i < NUMBER; i++) {
        scanf("%d", &stu[i]);
    }
    for (int i = 0; i < NUMBER; i++) {
        while (stu[i] > 60) {
            printf("及格分数分别为%d\n", stu[i] );
        }
    }
    return 0;
}