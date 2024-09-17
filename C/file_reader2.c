#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    FILE *file;    // type file pointer
    char line[20]; // string that can store up to 20 chars
    int counter = 0;
    file = fopen("fileIO2", "r");
    do
    {
        char c = fgetc(file); // get the first char of each line
        if (c == EOF)         // end of file breaks loop
            break;
        memset(line, 0, 20);              // clear the content of line[]
        while ((c != '\n') && (c != EOF)) // continue to get the character from the file if condition is true
        {
            line[counter++] = c; // index to next character in the line
            c = fgetc(file);
        }
        printf("%s  %d\n", line, counter);
        counter = 0;

    } while (true);
    fclose(file);
}
