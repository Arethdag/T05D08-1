#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main() {
    int n, data[NMAX];
    if (input(data, &n)) {
        squaring(data, n);
        output(data, n);
    } else {
        printf("n/a\n");
    }
    return 0;
}

int input(int *a, int *n) {
    scanf("%d", n);
    if (*n <= NMAX) {
        for (int *p = a; p - a < *n; p++) {
            scanf("%d", p);
        }
    } else {
        printf("n/a\n");
    }
    return 1;
}

void output(int *a, int n) {
    if (n <= NMAX) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("n/a\n");
    }
}

void squaring(int *a, int n) {
    for (int i = 0; i < n; i++) {
        (a[i] = a[i] * a[i]);
    }
}