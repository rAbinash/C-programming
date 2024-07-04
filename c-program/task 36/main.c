/******************************************************************************

write a program to sum all the number in the diagonal of a 2D array.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,j,s=0,a[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
        
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
        if(i==j||i+j==n+1)
    s+=a[i][j];
    }
    }
    printf("%d",s);

    return 0;
}


