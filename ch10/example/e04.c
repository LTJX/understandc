#include <stdio.h>
void hiroko(int *height) {
    if (*height < 180) {
        *height = 180;
        printf("%d\n",height );
    }
}
int main(void) {
    int sato = 178;
    int sanaka = 175;
    int masaki = 179;

    hiroko(&masaki);
    printf("%d\n",&masaki );
     hiroko(&sanaka);
     printf("%d\n",&sanaka );

    printf("佐藤的身高%d\n", sato );
    printf("佐中的升高%d\n", sanaka );
    printf("真琦的身高%d\n", masaki );

    return 0;
}