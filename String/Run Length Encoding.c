/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h> 

void run_length_encoding(char* s, int len)
{
    for(int i=0;i<len;i++)
    {
        int count = 1;
        while(s[i]==s[i+1] && i<len)
        {
            count++;
            i++;
        }
        printf("%c%d",s[i],count);
    }
}

int main ()
{
  char s[] = "aaaaaaaabbbbccdef";
  run_length_encoding(s,strlen(s));
  return 0;
}
