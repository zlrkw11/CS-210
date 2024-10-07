#include <stdio.h>
#include <ctype.h>
int main()
{
    char text[100] = "Hello World";
    printf("Before: %s\n", text);
    printf("After: ");
    swap_cases(text);
    printf("Done!\n");
}

void swap_cases(char *text)
{
    int i = 0;
    while (text[i] != '\0')
    {
        if (isupper(text[i]))
        {
            printf("%c", tolower(text[i]));
        }
        else if (islower(text[i]))
        {
            printf("%c", toupper(text[i]));
        }
        else
        {
            printf("%c", text[i]);
        }
        i++;
    }
    printf("\n");
}