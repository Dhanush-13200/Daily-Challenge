#include <stdio.h>
#include <stdlib.h>
/*
In a Supermarket, there are X products that are listed on a board. Each product has a unique
number. A boy wants to purchase Y products from the supermarket. The Program must accept X
integers representing the unique number of X products and Y integers representing the unique
number of Y products as the input. The program must print the unique number of all the 
products that are available to the boy in their order of occurences (i.e., the order mentioned
in the board) as the output.

Input :
7 3 
3 4 6 2 7 1 9
2 1 6

output :
6 2 1
*/

int main()
{
    int x,y,i,j,arr[1000],arr1[1000];
    scanf("%d %d",&x,&y);
    for(i=0 ; i<x ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0 ; j<y ; j++)
    {
        scanf("%d",&arr1[j]);
    }
    for(i=0 ; i<x ; i++)
    {
        for(j=0 ; j<y ; j++)
        {
            if(arr[i]==arr1[j])
            {
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}
