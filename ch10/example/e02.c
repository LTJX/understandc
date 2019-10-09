#include <stdio.h>

void g(int * pArr, int len) {
    pArr[2] = 88;
}
void f(void) {
    int a[5] = {1, 2, 3, 4, 5};
    g(a, 5);
    printf("%d\n", a[2] );
}
int main(void) {
    f();
    return 0;
}