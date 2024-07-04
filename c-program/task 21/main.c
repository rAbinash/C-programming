/******************************************************************************

write the program to evaluate the given series.
1!/1 + 2!/2 + 3!/3.......n!/n

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i=1,s=0,f=1;
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        s=s+f/i;
        i++;
    }
    printf("%d",s);

    return 0;
}
