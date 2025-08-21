#include <stdio.h>

extern int a;
void foo();
extern void foo();          // not necessary

void main() {
    a+=1;
    printf("main: %d\n",a);

    foo();
}