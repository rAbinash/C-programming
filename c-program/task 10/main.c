/* write a program to find odd or even without using modulus.*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf(num/2*2==num?"even":"odd");
    return 0;
    }
