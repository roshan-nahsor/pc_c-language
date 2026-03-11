#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    printf("sizeof(a)=%ld\n",sizeof(a));

    for(int i=0; i<sizeof(a)/sizeof(int); i++) {
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}