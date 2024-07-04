/******************************************************************************

write a program to find whether the given number is even or odd,if even cube the input
value and print the numbers in the 10th places else square the input value and print the numbers
in the unit place.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
     printf("%d",(a*a*a)/10%10);
     
     else
        printf("%d",(a*a)%10);

    return 0;
}
