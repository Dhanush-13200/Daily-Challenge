#include <stdio.h>
#include <stdlib.h>
/*
Input :
5
Output :
1 4 6 4 1

*/

int main()
{
    long long int x,i,j,num=1;
    scanf("%lld",&x);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            if(i==0 || j==0)
            {
                num=1;
            }
            else
            {
                num=num*(i-j+1)/j;
            }
            if(i==x-1)
            {
                printf("%lld ",num);
            }
        }
    }
    return 0;
}
