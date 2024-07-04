/******************************************************************************

write a program to pass the array to the function and sort them. 

*******************************************************************************/
#include <stdio.h>
int sort(int *p,int n)
{
    int x,y;
    for(x=0;x<n;x++)
        for(y=x+1;y<n;y++)
            if(*(p+x)>*(p+y))
                *(p+x)=*(p+x)+*(p+y)-(*(p+y)=*(p+x));
}
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",&a[i++]));
    sort(a,n);
    for(i=0;i<n;printf("%d ",a[i++]));
    return 0;
}
