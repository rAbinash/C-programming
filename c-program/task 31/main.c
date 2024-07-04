/******************************************************************************

write the program to remove the vowels,space & duplicate characters. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;char a[100];
    scanf("%[^\n]",a);
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[j];j++)
        {
            if(a[i]==a[j])
            a[j]=' ';
        }
    }
    for(i=0;a[i];i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'
        &&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&a[i]!=' ')
        printf("%c",a[i]);
    }


    return 0;
}

