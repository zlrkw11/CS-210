#include <stdio.h>
#include <string.h>

void make_new_name(char *new_name, char *original_name);
int is_alpha(char c);
int is_digit(char c);
int is_valid_password(char *password);
void perform_XOR(char *input_filename, char *output_filename, char *password);
void print_first_five(char *filename);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./A2 filename password\n");
        return 1;
    }

    char new_name[20];
    make_new_name(new_name, argv[1]);
    printf("New filename = %s\n", new_name);

    return 0;
}

void make_new_name(char *new_name, char *original_name)
{
    strcpy(new_name, "new-");
    strcat(new_name, original_name);
}

int is_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return 1;
    }
    return 0;
}

int is_digit(char c)
{
    if ((c >= 0) || (c <= 9))
    {
        return 1;
    }
    return 0;
}
