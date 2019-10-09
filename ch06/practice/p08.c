#include <stdio.h>
int min_of(const int v[], int n) {
    int i;
    int min;
    for (int i = 0; i < n; i++) {
        min = v[0];

        if (v[i] <= v[0]) {
            min = v[i];
            i++;
        }
//return min;放在这里为什么不行
    }
    return min;

}

int main(void) {
    int array[] = {3, 7, 2, 5, 9};
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i] );
    }
    printf("\n");
    printf("最小值为%d\n", min_of(array, 5) );
    return 0;
}