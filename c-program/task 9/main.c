/******************************************************************************

write a program to sum only the even number.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int x,r,y=0;
   scanf("%d",&x);
   while(x)
   {
       r = x % 10;
      x=x/10;
       if(r%2==0)
       y=y+r;
       
   }
   printf("%d",y);
   
   

  
    return 0;
    
}

