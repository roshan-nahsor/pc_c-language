#include <stdio.h>

union myunion_t{
    char a;
    short b;
};

void main() {
    union myunion_t p;

    printf("%ld\n", sizeof(union myunion_t));
    printf("%ld\n", sizeof(p));

}