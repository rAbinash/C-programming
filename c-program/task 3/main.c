/******************************************************************************

write a program for basic arithmetic operators.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=2,b=-3,c=3,d=-7,e=11,f,g,h,i,j,k;
    f=a/b/c;
    g=7 + c * --d / e;
    h=2 * a % -b + c + 1;
    i=39 / - ++e - +29 % c;
    j= a += b += c += 1 + 2;
    k= 7 - + ++a % (3-b);
    printf("%d%d%d%d%d%d",f,g,h,i,j,k);
return 0;
    
}
