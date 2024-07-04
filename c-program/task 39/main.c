/******************************************************************************

write a program to merge two files.

*******************************************************************************/
#include <stdio.h>
int main()
{
    FILE *p;
    char c[100];
    p=fopen("zoro.txt","r");
    fscanf(p,"%[^\n]",c);
    fclose(p);
    p=fopen("luffy.txt","a");
    fprintf(p,"%s",c);
    fclose(p);
    return 0;
}

