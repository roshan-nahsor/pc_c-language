#include <stdio.h>

int main () {
    int *a="12345";
    char*b="12345";
    printf("int*\t%s, %ld\n", a, sizeof(a));
    printf("char*\t%s, %ld\n", b, sizeof(b));
    return 0;
}