/******************************************************************************

write the program function to find whether the given number id adam or not.
(Adam:12->12power2->144->rev(144)->441->sqaure root of 441->21->rev(21)->12)

*******************************************************************************/
#include <stdio.h>
int ad (int n){
    int r=0;
    while(n){
        r=r*10+n%10;
        n/=10;
    }
 return r;   
}

int main()
{
    int n;
    scanf("%d",&n);
    if(ad(n*n)==ad(n)*ad(n))
    printf("adam number");
    else
    printf("not an adam number");
    return 0;
}
