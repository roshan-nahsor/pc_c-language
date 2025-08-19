// UNSUCCESSFUL ATTEMPT
#include <stdio.h>

enum days_e{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

void main() {
    char input[10];
    enum days_e day;

    printf("Enter day: ");
    scanf("%s",input);
    // printf("%s", input);

    day = (enum days_e)input[0];

    printf("%d %d\n", saturday, day);

    // printf("%d days are left for weekend!\n", (saturday - day));
    // printf("%c",643944926);
}