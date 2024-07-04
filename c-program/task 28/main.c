/******************************************************************************

write the function to find nth number in the lucas series using recursion.
l(0)=0,l(1)=1,l(n)=l(n-1)+l(n-2)

*******************************************************************************/
#include <stdio.h>
int luc (int n)
{
    if(n==0)
    return 2;
 else if(n==1)
    return 1;
    
    else
        
    
    return luc(n-1)+luc(n-2);
    
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",luc(n));

    return 0;
}
