/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
table (int number, int range)
{
  if (range == 0)
    {
      return;
    }
  table (number, range - 1);
  printf ("%d * %d = %d\n", number, range, (number * range));
}

int
main ()
{
  table (10, 5);
  return 0;
}
