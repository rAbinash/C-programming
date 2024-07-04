/******************************************************************************

write a program to find and replace the word in the given string.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][100],b[100],x[100],y[100];
    int r=0,c=0,i;
    scanf("%[^\n]%s%s",b,x,y);
    for(i=0;b[i];i++)
    {
        if(b[i]!=' ')
        {
            a[r][c++]=b[i];
        }
        else
        {
            a[r][c]='\0';
            r++;
            c=0;
        }
        a[r][c]='\0';
    }
    for(i=0;i<=r;i++)
    {
        if(strcmp(a[i],x)==0)
        strcpy(a[i],y);
        printf("%s",a[i]);
    }
 return 0;
}