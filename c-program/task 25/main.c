/* pattern task 4*/
 #include <stdio.h>

int main()
{
  int n,i,j,c=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(c==1 && i==1)
          printf("%2d",c++);
          else if(c==2)
          printf("%4d",c++);
          else
          printf("%3d",i%2?c++:--c);
          }
      c+=n;
      printf("\n");
  }

return 0;
}