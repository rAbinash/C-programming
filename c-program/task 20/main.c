/******************************************************************************

write a program to find whether the given number i s progressive or not.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int f = 1, n, a, t;
  scanf ("%d", &n);
  t = n % 10;
  while (n /= 10)
    {
      a = n % 10;
      if (t >= a)
	{
	  t = a;
	  f = 1;
	}
      else
	{
	  f = 0;
	  break;
	}
    }
  printf (f?"progressive":"not progressive");

  return 0;
}
