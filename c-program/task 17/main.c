/******************************************************************************

write a program to remove 3 in the given number and reverse it,
if 3 is not found print the number.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,t,f=1,r=0;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        if(n%10!=3)
        r=r*10+n%10;
        else
        f=0;
        n/=10;
    }
    printf("%d",f?t:r);

    return 0;
}
