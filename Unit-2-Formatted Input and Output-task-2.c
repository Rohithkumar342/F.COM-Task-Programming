#include <stdio.h>

int main(void) 
{
    int day, month, year;

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%d%d%d", &day, &month, &year);

    printf("Formatted date (yyyy-mm-dd) %4.d - %2.d - %2.d\n", year, month, day);

    return 0;
}
