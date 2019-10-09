#include <stdio.h>

void sum_diff(int n1, int n2, int sum, int diff) {
    sum = n2 + n1;

}
int main(void){
    int a, b;
    int c = 0;
    int d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    sum_diff(a, b, c, d);
    printf("%d\n", c );
    return 0;
}