#include <stdio.h>
int main()
{
    int var1 = 12;
    int var2 = 12;
    int var3 = 12;
    int *ptr1 = &var1;

    int *ptr2 = &var2;
    *ptr2 = var1 + var2;
    ptr2 = &var3;
    var3 = *ptr1 + *ptr2;
    var1 = 6;
    *ptr1 = *ptr2;

    printf("%d %d %d", var1, var2, var3);
    return 0;
}