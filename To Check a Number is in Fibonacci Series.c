 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
This program accepts N integers as input and prints sum of numbers 
which are present in fibonacci series
Input :
5
4 13 5 23 2
Output :
20 (13+5+2)
*/

int main()
{
    long long int x,n,i,f,sum=0;
    long long int k,l,temp,temp1;
    scanf("%lld",&x);
    for(i=0 ; i<x ; i++)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            f=1;
        }
        else
        {
            k=(((n*n)*5)-4);
            l=(((n*n)*5)+4);

            temp = sqrt(k);
            temp1= sqrt(l);

            if(temp*temp == k || temp1*temp1==l)
            {
                sum+=n;
            }
        }
    }
    if(sum>0)
    {
        printf("%lld",sum);
    }
    else if(f==1)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
