#include <stdio.h>
#include <string.h>

void swap(int *i, int *j)
{
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void sortInDescend_1(int var1, int var2, int var3)
{
    if (var1 < var2)
    {
        swap(&var1, &var2);
    }
    if (var1 < var3)
    {
        swap(&var1, &var3);
    }
    if (var2 < var3)
    {
        swap(&var2, &var3);
    }
}

void sortInDescend_2(int *var1, int *var2, int *var3)
{
    if (*var1 < *var2)
    {
        swap(var1, var2);
    }
    if (*var1 < *var3)
    {
        swap(var1, var3);
    }
    if (*var2 < *var3)
    {
        swap(var2, var3);
    }
}

int main(void)
{
    int a1, a2, a3;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);

    // type your code here

    return 0;
}