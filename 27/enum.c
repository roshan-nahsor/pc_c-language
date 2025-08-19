#include <stdio.h>

enum weekday_t{
    sunday=0,
    monday,
    tuesday,
    wednesday=7,
    thursday,
    friday,
    saturday
};

void main() {
    printf("%d\n", saturday);

    enum weekday_t weekend;
    weekend=saturday;
    printf("%d\n", weekend);
    
}