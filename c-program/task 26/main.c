/******************************************************************************

write the function to find whether the given number is armstrong or not.
(Armstrong number:1634->length-4,1power4+6power4+3power4+4power4=1634)

*******************************************************************************/
#include <stdio.h>
int arm(int x,int y){
int p=1;
while(y--){
p*=x;
}
return p;
}
int main()
{
    int n,c=0,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n){
    c++;
    n/=10;
    }
    n=t;
    while(t){
        sum+=arm(t%10,c);
        t/=10;
    }
    printf(n==sum?"armstrong number":"Not an armstrong number");
    return 0;
}
