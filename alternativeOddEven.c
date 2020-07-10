#include<stdio.h>
#include <stdlib.h>

/*
Input :
5
24 83 68 23 74
Output :
Yes

Input :
5 
11 22 44 55 66
Output :
No
*/

int main()
{
    int n,x,f=0,i;
    scanf("%d",&n);
    scanf("%d",&x);
    if(x&1)
        f=1;
    for(i=1;i<n;i++){
        scanf("%d",&x);
        if(f==1 && (!(x&1)))
            f=0;
        else if(f==0 && x&1)
            f=1;
        else{
            printf("no");
            return;
        }
    }
    printf("yes");
}
