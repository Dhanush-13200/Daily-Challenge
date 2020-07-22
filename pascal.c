#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,num=1;
    scanf("%d",&x);
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            if(i==0 && j==0)
            {
                num=1;
            }
            else
            {
                num=num*(i-j+1)/j;
            }
            if(i==x-1)
            {
                printf("%d ",num);
            }
        }
    }
    return 0;
}
