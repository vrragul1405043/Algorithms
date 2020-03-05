/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void
reverse (char *b, char *e)
{
  char temp;
  while (b < e)
    {
      temp = *b;
      *b = *e;
      *e = temp;
      b++;
      e--;
    }
}

void
display (char *str)
{
  printf ("%s\n", str);
}

void
reverseWords (char *s)
{
  char *temp = s;
  char *wordStart = s;

  while (*temp != '\0')
    {
      *temp++;
      if (*temp == ' ')
	{
	  reverse (wordStart, temp - 1);
	  wordStart = temp + 1;
	}
      else if (*temp == '\0')
	{
	  reverse (wordStart, temp - 1);
	}
    }
  reverse (s, temp - 1);
  display (s);
}

int
main ()
{
  char s[] = "I am a Disco Dancer";
  reverseWords (s);
  return 0;
}
