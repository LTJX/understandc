#include <stdio.h>
int main(void) {
    int input;
    int i;
    int s;
    int inputArray1[10];
    int inputArray2[10];
    for (int i = 0; i < 10; i++) {
        inputArray1[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        inputArray2[i] = 2 * i;
    }
    printf("%d\n", inputArray1[1] );
    printf("%d\n", inputArray2[1] );
    s = inputArray1[1];
    inputArray1[1] = inputArray2[1];
    inputArray2[1] = s;
    printf("%d\n", inputArray1[1] );
    printf("%d\n", inputArray2[1] );

    return 0;
}