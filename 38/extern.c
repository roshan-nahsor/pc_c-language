#include <stdio.h>

extern int a;

void main() {
    a+=1;
    printf("%d\n",a);
}