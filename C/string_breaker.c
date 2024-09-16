#include <string.h>
#include <stdio.h>
int main()
{
    char str[80];                      // string of 79 characters + 1 null character
    const char delimeters[5] = " -|."; // delimeters declared
    char *token, *pos;
    strcpy(str, "This is-an|example-program."); // copy into our str variable
    pos = str;                                  // pos points to first char
    token = strsep(&pos, delimeters);           // token = pos --> delimeter found
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strsep(&pos, delimeters);
    }
}
