#include <iostream>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#include <bits/stdc++.h>

using namespace std;

int maxSum(int* a, int size, int k)
{
    int maxValue = INT_MIN;
    int current_sum=0;
    for(int i=0;i<size;i++)
    {
        current_sum+=a[i];
        if(i>=k-1)
        {
            maxValue = MAX(maxValue,current_sum);
            current_sum-=a[i-(k-1)];
        }
    }
    return maxValue;
}

int main()
{
    int a[]={8,5,9,1,3,74,7,2};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<maxSum(a,size,3)<<endl;
    return 0;
}
