#include <stdio.h>
#include <stdlib.h>
/*
Example Input/Output 1:
Input:
6
987 168 1 2 3 133
Output:
988 161 2 3 3 137
*/

void leftShiftUnitDigit(int arr[200] , int N)
{
    int arra[200],temp;
    int i;
    for(i=0 ; i<N ; i++)
    {
        arra[i]=(arr[i]%10);
    }
    for(i=0 ; i<N ; i++)
    {
        arr[i]/=10;
        arr[i]*=10;
    }
    temp=arra[0];
    for(i=0 ; i<N ; i++)
    {
        arra[i]=arra[i+1];
    }
    arra[N-1]=temp;
    for(i=0 ; i<N ; i++)
    {
        arr[i]+=arra[i];
    }
}

int main()
{
    int N,arr[200];
    scanf("%d",&N);
    int i;
    for(i=0 ; i<N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    leftShiftUnitDigit(arr,N);
    for(i=0 ; i<N ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
