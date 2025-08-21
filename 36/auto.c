#include <stdio.h>

void foo(int a) {
    printf("%d\n",a);
} 

void main() {
    {
        auto int a=10;
        printf("%d\n", a);
        foo(a);
    }
    // printf("%d\n", a);

    return;
}