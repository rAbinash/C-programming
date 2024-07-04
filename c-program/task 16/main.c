/******************************************************************************

write a program to generate the fibonacci series.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a=-1,b=1,c;
    scanf("%d",&n);
    while(n--){
    printf("%d",c=a+b);
    a=b;
    b=c;
}
    return 0;
}