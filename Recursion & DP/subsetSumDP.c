/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
subset_sum_dp (int *a, int n, int sum)
{
  int cache[n][sum + 1];
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j <= sum; j++)
	{
	  //if sum is 0 then true (0 ->false 1->True)
	  if (j == 0)
	    {
	      cache[i][j] = 1;
	    }			//end if
	  if (i == 0)
	    {
	      if (a[i] == j)
		{
		  cache[i][j] = 1;	// first row filling
		}
	    }			//end if
	  else
	    {
	      if (j < a[i] || cache[i - 1][j] == 1)
		{
		  cache[i][j] = cache[i - 1][j];	// copying the previous row if it is less than the sum or if it is 1
		}
	      else
		{
		  cache[i][j] = cache[i - 1][j - a[i]];
		}
	    }			//end else
	}			//end for j
    }				//end for i
  return cache[n - 1][sum];
}				//end function

int
main ()
{
  int a[] = { 2, 3, 5, 7, 10 };
  int n = sizeof (a) / sizeof (a[0]);
  int sum = 12;
  int res = subset_sum_dp (a, n, sum);
  if (res)
    {
      printf ("Yes, the given sum exists");
    }
  else
    {
      printf ("The given sum does not exist");
    }
  return 0;
}
