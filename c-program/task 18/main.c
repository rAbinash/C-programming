/******************************************************************************

write a program to find the square root of the given number without any function.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float s,t=0;
    int n;
    scanf("%d",&n);
    s=n;
    while(s!=t)
    {
        t=s;
        s=(n/t+t)/2;
    }
    n=(int)s;
    if(n==s)
    printf("%d",n);
    else
    printf("%.3f",s);

    return 0;
}
