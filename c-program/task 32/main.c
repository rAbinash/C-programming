/******************************************************************************

write a program to check whether the given sequence is in proper order.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,flag=0;char a[100];
    scanf("%[^\n]",a);
    for(i=0;a[i];i++)
    {
        if(a[i]=','&&a[i-1]==a[i+1])
        {
            flag=1;
        }
        
    }
    if(a[0]==a[i-1])
    flag=1;
    printf("%d",flag);

    return 0;
}
