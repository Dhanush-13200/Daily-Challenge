#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Input :
HELLO
Output :
----H
---HE
--HEL
-HELL
HELLO
ELLO
LLO
LO
O
*/
int main()
{
    char ch[101];
    int x,i,j,k;
    scanf("%s",ch);
    x=strlen(ch);
    for(i=1 ; i<=x ; i++)
    {
        for(j=1 ; j<=x-i ; j++)
        {
            printf("-");
        }
        for(k=0 ; k<i ; k++)
        {
            printf("%c",ch[k]);
        }
        printf("\n");
    }
    for(i=1 ; i<x ; i++)
    {
        for(j=i ; j<x ; j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
    return 0;
}
