/******************************************************************************

write a program to get n number, sort using the reverse of the number.

*******************************************************************************/
#include <stdio.h>

int rev(int n)
{
    int s=0;
    while(n)
    {
        s=s*10+(n%10);
        n/=10;
    }
    return s;
}
int main()
{
    int a[100],i,j,n,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(rev(a[i])>rev(a[j]))
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
        printf("%d ",a[i]);
    }

return 0;
}
