/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX(x,y) ((x>y)?x:y)


int
longest_common_subsequence (char *str1, char *str2)
{
  int m = strlen (str1);
  int n = strlen (str2);

  int cache[m + 1][n + 1];

  for (int i = 0; i <= m; i++)
    {
      for (int j = 0; j <= n; j++)
	{
	  if (i != 0 && j != 0)
	    {
	      cache[i][j] = -1;
	    }
	  else
	    {
	      cache[i][j] = 0;
	    }
	}
    }				//end initialization for loop

  for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  if (str1[i] == str2[j])
	    {
	      cache[i + 1][j + 1] = cache[i][j] + 1;
	    }
	  else
	    {
	      cache[i + 1][j + 1] = MAX (cache[i + 1][j], cache[i][j + 1]);
	    }
	}
    }
  return cache[m][n];
}

int
main ()
{
  char *s1 = "AGGTAB";
  char *s2 = "GXTXAYB";
  int res = longest_common_subsequence (s1, s2);
  printf ("%d\n", res);
  return 0;
}
