/******************************************************************************

write a program to generate a rank for n number of students based on their marks.

*******************************************************************************/
#include <stdio.h>
struct std_student{
    char std_name[100];
    int m1,m2,m3,total;
    int rank;
}s[100],t;

int main()
{
    int n,i,j,r=1;
    printf("enter the value of n ");
    scanf("%d",&n);
    printf("enter student names and the three marks\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d%d",s[i].std_name,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
    }
   
    for(i=0;i<n;i++)
 {
       s[i].rank=1;
        for(j=i+1;j<n;j++)
        {
            if(s[i].total<s[j].total)
            {
                s[i].rank++;
            }
        }
    printf("%s %d %d\n",s[i].std_name,s[i].total,s[i].rank);
}

       
return 0;
}
