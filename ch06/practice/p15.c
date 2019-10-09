#include <stdio.h>
int count = 1;
void put_count() {
    printf("put_count:第%d次\n", count );
    count++;
}
int main(void) {
    put_count();
    put_count();
    put_count();
    return 0;
}