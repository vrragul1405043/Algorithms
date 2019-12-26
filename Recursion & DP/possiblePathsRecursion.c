/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int number_of_paths(int m,int n)
{
    if(m==1 || n==1)
    {
        return 1;
    }
    return number_of_paths(m-1,n) + number_of_paths(m,n-1);
}

int main()
{
    int res = number_of_paths(4,4);
    printf("The total number of possible paths are %d", res);
    return 0;
}
