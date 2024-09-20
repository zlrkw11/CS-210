#include <stdio.h>
void foo();
int global = 0;

int main()
{
    int local = 1;
    printf("main: global %d local %d\n", global, local);
    global = 1;
    foo();
    printf("main: global %d local %d\n", global, local);
}

void foo()
{
    int local;
    local = 3;
    printf("foo: global %d\n", global);
    global = 2;
}
