/******************************************************************************

write a program to sumup all the digits in the odd place.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int c=0,n,s=0,t;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        c++;
        t/=10;
    }
    while(n)
    {
        if(c%2)
        s+=n%10;
        c--;
        n/=10;
        
    }

    printf("%d",s);

    return 0;
}
