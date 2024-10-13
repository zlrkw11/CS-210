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

    if (!is_valid_password(argv[2]))
    {
        return 1;
    }

    perform_XOR(argv[1], new_name, argv[2]);
    print_first_five(new_name);

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
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}

int is_valid_password(char *password)
{
    int length = strlen(password);
    int has_alpha = 0;
    int has_digit = 0;

    printf("Password length = %d\n", length);

    if (length < 8)
    {
        printf("The password needs to have at least 8 characters.\n");
    }

    for (int i = 0; i < length; i++)
    {
        if (is_alpha(password[i]))
        {
            has_alpha = 1;
        }
        if (is_digit(password[i]))
        {
            has_digit = 1;
        }
    }

    if (!has_alpha)
    {
        printf("The password needs to contain at least 1 alphabetical character.\n");
    }
    if (!has_digit)
    {
        printf("The password needs to contain at least 1 digit.\n");
    }

    if (length >= 8 && has_alpha && has_digit)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void perform_XOR(char *input_filename, char *output_filename, char *password)
{
    FILE *input = fopen(input_filename, "rb");
    FILE *output = fopen(output_filename, "wb");
    if (input == NULL || output == NULL)
    {
        printf("Error opening files.\n");
        return;
    }
    int password_length = strlen(password);
    char buffer[password_length];
    int bytes_read;

    while ((bytes_read = fread(buffer, 1, password_length, input)))
    {
        for (int i = 0; i < bytes_read; i++)
        {
            buffer[i] ^= password[i % password_length];
        }
        fwrite(buffer, 1, bytes_read, output);
    }
    fclose(input);
    fclose(output);
}

void print_first_five(char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        int byte = fgetc(file);
        if (byte == EOF)
            break;
        printf("%02x\n", byte);
    }
    fclose(file);
}