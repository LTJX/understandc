#include <stdio.h>
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {
    int i, j;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void mat_print(const int m[4][4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++)
            printf("%10d", m[i][j]);
        putchar('\n');
    }
}
int main(void) {
	// 为了防止数组c初值不为0
     static int c[4][4] ;
    //int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9},{1,1,1}};
    int b[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}};
    mat_mul(a, b, c);
    mat_print(c);
}





