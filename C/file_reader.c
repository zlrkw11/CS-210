#include <stdio.h>

int main()
{
    FILE *file; // type file pointer
    char name[10], degree[5];
    int mark;
    file = fopen("fileIO", "r");
    while (fscanf(file, "%s %s %d", name, degree, &mark) != EOF)
        printf("%s %s %d\n", name, degree, mark);
    fclose(file);
}
