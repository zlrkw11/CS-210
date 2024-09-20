#include <stdio.h>

int main(void)
{
    int number_of_minutes;
    scanf("%d", &number_of_minutes);

    printf("%d minutes is equivalent to %d hours and %d minutes.", number_of_minutes, number_of_minutes / 60, number_of_minutes % 60);

    return 0;
}