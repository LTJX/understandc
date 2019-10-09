#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n) {
    int i;
    int y = 0;
    for (int i = 0; i < n; i++) {
        if  (key == v[i]) {
            idx [y] = i;
            y++;
        }
    }
    return y;

}

int main(void) {
    int array[7] = {1, 7, 5, 7, 2, 4, 7};
    int ary[7];
    int key = 7;
    printf("和key%d相等的元素个数为：%d\n", key, search_idx(array, ary, 7, 7) );


}