#include <stdio.h>

int a=10;
// static int a=10;         //won't work

static void foo() {
    char b=3;
    b+=1;
    printf("foo: %d\n",b);
}

void bar() {
    static char b=3;
    b+=1;
    printf("bar: %d\n",b);

    foo();
}