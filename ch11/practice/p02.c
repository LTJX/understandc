#include <stdio.h>
int main(void) {
    int i;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    printf("%lu\n", sizeof(a) );
    printf("%lu\n", sizeof(a[0]) );
    printf("%lu\n", sizeof(p) );
    printf("%lu\n", sizeof(*p) );

    int size_a = sizeof(a) / sizeof(a[0]);
    int size_p = sizeof(p) / sizeof(*p);
    for (i = 0; i < size_a; i++) {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }
    for (i = 0; i < size_p; i++) {
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }

    return 0;
}