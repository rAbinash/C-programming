/******************************************************************************

write a program to find and replace the given word in a file. 

******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *p;
    char a[100][100],b[100],x[100],y[100];
    int i,r=0,c=0;
    p=fopen("luffy.txt","r");
    fscanf(p,"%[^\n]",b);
    fclose(p);
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
    printf("enter the word to search\n");
    scanf("%s",x);
    printf("enter the word to replace\n");
    scanf("%s",y);
    p=fopen("zoro.txt","w");
    for(i=0;i<=r;i++)
    {
        if(strcmp(a[i],x)==0)
        
            strcpy(a[i],y);
        
        fprintf(p,"%s",a[i]);
    }
    fclose(p);
    return 0;
}
