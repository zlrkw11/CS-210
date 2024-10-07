#include <stdio.h>
#include <string.h>

void get_letters(char *letters, int number);

int main()
{
    char letters[10];
    int number;
    memset(letters, '\0', 10);
    scanf("%d", &number);
    get_letters(letters, number);
    printf("%s\n", letters);
    return 0;
}

// define the get_letters() function
void get_letters(char *letters, int number)
{
    for (int i = 0; i < number; i++)
    {
        scanf(" %c", &letters[i]);
    }
}