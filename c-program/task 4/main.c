/******************************************************************************

write a program for double,float.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c ='w';
    int i=1,j=2,k=-7,l,m,n,o;
    double x=7e+33,y=0.001,z;
    l = 'a'+1<c;
    m=-i-5*j>=k+1;
    n=3<j<5;
    z=x-3.333<=x+y;
    o=x<x+y;
    printf("%d %d %d %f %d",l,m,n,z,o);

    return 0;
}
