/******************************************************************************

write a sample program for arithmetic,increment and decrement operators.

*******************************************************************************/
#include <stdio.h>

int main()
{

    int a=1, b=2,c=3,d=4,e,f,g,h;
    e = a*b/c;
    f = a*b%c+1;
    g = ++a * b - c--;
    h = 7 - -b * ++d;
    
    printf("%d %d %d %d",e,f,g,h);

    return 0;
}
