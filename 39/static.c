#include <stdio.h>

extern int a;
void foo();

void bar() {
    static char b=3;
    b+=1;
    printf("bar: %d\n",b);
}
// extern void foo();          // not necessary

void main() {
    a+=1;
    printf("main: %d\n",a);

    foo();
    bar();
    
    foo();
    bar();
}