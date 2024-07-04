/******************************************************************************

write a sample program for ternary operator.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a ='a',b='b',c;
    int i= 1, j=2,k;
    double x= 7.07,y;
    c=i==j?a-1:b+1;
    k=j%3==0?i+4:x;
    y= j%3? i+4:x;
    printf("%c %d %f",c,k,y);

    return 0;
}
