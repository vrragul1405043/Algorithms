/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fibonacci_array(int* a,int n)
{
    if(n==0)
    {
        return a[n];
    }
    else
    {
        a[n]=a[n]+fibonacci_array(a,n-1);
    }
}

int main()
{
    int a[]={18,34,56,21,5};
    int n = sizeof(a)/sizeof(a[0]);
    fibonacci_array(a,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
