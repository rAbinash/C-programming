/******************************************************************************

write a program to add three numbers using a single pointers.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *ptr;
    scanf("%d%d%d",ptr,ptr+1,ptr+2);
        printf("%d",*(ptr)+*(ptr+1)+*(ptr+2));

    return 0;
}

