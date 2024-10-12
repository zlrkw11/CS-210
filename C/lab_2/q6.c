#include <stdio.h>

int process_file(char *filename, char words[20][15])
{
    FILE *file = fopen(filename, "r");
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        if (fscanf(file, "%s", words[i]) != EOF)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    char filename[15] = "Words1.txt";
    char words[20][15];
    int count = process_file(filename, words);
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", words[i]);
    }
}
