#include <stdio.h>

int main(void)
{
    int number;
    char symbol;
    scanf("%d", &number);
    scanf(" %c", &symbol);
    printf("%c%d%c", symbol, number, symbol);
    return 0;
}