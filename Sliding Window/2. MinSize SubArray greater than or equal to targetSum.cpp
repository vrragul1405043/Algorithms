/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#include <bits/stdc++.h>

using namespace std;

int min_size_sub_array(int* a, int size, int target_sum)
{
    int min_size = INT_MAX;
    int windowStart = 0;
    int current_sum = 0;
    for(int windowEnd = 0; windowEnd<size; windowEnd++)
    {
        current_sum+=a[windowEnd];
        while(current_sum>=target_sum)
        {
            min_size = MIN(min_size, (windowEnd-windowStart)+1);
            current_sum-=a[windowStart];
            windowStart++;
        }
    }
    return min_size;
}

int main()
{
    int a[]={4,5,1,6,7,2,3,9,99};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<min_size_sub_array(a,size,21)<<endl;
    return 0;
}
