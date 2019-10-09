#include <stdio.h>
void intary_rcpy(int v1[], int v2[], int n) {
    int i;
    int temp;
    for (int i = 0; i < n / 2; i++) {
        int temp = v2[i];
        v2[i] = v2[n - 1 - i];
        v2[n - 1 - i] = temp;
    }

    for (int i = 0; i < n; i++) {
         v1[i] = v2[i];
    }
    for (int i = 0; i < n; i++) {
        printf("v1[%d]=%d", i, v1[i]);
    }
}
int main(void) {
    int array[5] = {1, 3, 5, 7, 9};
    int ary[5];
    intary_rcpy(ary, array, 5);

}