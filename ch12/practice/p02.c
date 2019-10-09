#include <stdio.h>
#define NAME_LEN 64
typedef struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void hiriko(Student *std) {
    if (std->height < 180) {
        std->height = 180;
    }
    if (std->weight > 80) {
        std->weight = 80;
    }
}

int main(void) {
    Student sanaka = {"Sanaka", 175, 62.5, 73000};
    printf("请输入姓名：");
    scanf("%s", &sanaka.name);//这里取地址符有错吗
    printf("请输入身高："); scanf("%d", &sanaka.height);
    printf("请输入体重："); scanf("%f", &sanaka.weight);
    printf("请输入奖学金："); scanf("%ld", &sanaka.schols);
    hiriko(&sanaka);
    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}
