#include <stdio.h>

int dpm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0));
}

void decrement_date(int *y, int *m, int *d) {
    *d -= 1;
    if (*d == 0) {
        *m -= 1;
        if (*m == 0) {
            *y -= 1;
            *m = 12;
        } else {
            if (*m == 2) {
                if (isLeapYear(*y)) {
                    dpm[2] = 29;
                } else {
                    dpm[2] = 28
                }
            }
        }
        *d = dpm[*m];
    }
}

void increment_date(int *y, int *m, int *d) {
    *d += 1;
    if (*m == 2) {
        if (isLeapYear(*y)) {
            dpm[2] = 29;
        } else {
            dpm[2] = 28;
        }
    }

    if (*d > dpm[*m]) {
        *d = 1;
        *m += 1;
        if (*m > 12) {
            *y += 1;
            *m = 1;
        }
    }
}

