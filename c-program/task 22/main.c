/******************************************************************************

write a program to generate the pattern.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        
        if(r==c||r+c==n+1)
        printf("%d",r);
        else
        printf(" ");
        
        
    printf("\n");
}
    return 0;
}
