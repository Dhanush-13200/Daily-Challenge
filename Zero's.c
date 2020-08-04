#include<stdio.h>
#include <stdlib.h>

/*
This Program is used to check whether a number consist of zero
in a given range of Numbers

Input :
98 125

Output :
100 101 102 103 104 105 106 107 108
109 110 120

*/

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int i,count,temp,flag=0;
    for(i=x ; i<=y ; i++)
    {
        count=0,temp=i;
        while(temp>0)
        {
            if(temp%10==0)
            {
                count++;
            }
            temp/=10;
        }
        if(count>0)
        {
            printf("%d ",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    return 0;
}
