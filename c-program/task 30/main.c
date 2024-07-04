/******************************************************************************

write the program to remove the vowels and print the number series.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,c=1;char a[100];
    scanf("%[^\n]",a);
    for(i=0;a[i];i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'
        ||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        printf("%d",c++);
        else
        printf("%c",a[i]);
    }


    return 0;
}

