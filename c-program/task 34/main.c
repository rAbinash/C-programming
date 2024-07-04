 /*write the program to remove duplicate numbers in the array.*/
 #include <stdio.h>

int main()
{
   int a[100],i,j,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
         if(a[i]!=0)
    printf("%d",a[i]);
    }
    return 0;
}
