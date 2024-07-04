/******************************************************************************

write a program to get n numbers and sum all the numbers ending with six.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a,s=0;
    scanf ("%d",&n);
    sum:
    scanf("%d",&a);
    if(a%10==6)
    s+=a;
    if(--n)
    goto sum;
    printf("%d",s);
    
    

    return 0;
}
