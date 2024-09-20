#include <stdio.h>
int inGlobal;
main()
{
    int inLocal; // local to main
    int outLocalA;
    int outLocalB;
    // initialize
    inLocal = 5;
    inGlobal = 3;
    // perform calculations
    outLocalA = inLocal++ & ~inGlobal;
    outLocalB = (inLocal + inGlobal) - (inLocal - inGlobal);
}
