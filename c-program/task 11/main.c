/******************************************************************************

write the program to find the biggest number among the given three numbers.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    printf("%d",a>b&&a>c?a:b>c?b:c);

    return 0;
}
