/******************************************************************************

write a program using the switch to find the grade with below constraints.
81-100(Excellent)
61-80(B)
41-60(A)
1-40(D)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    if(m>0&&m<101)
    switch((m-1)/10){
        case 9:
        case 8:
        printf("Excellent");break;
        case 7:
        case 6:
        printf("B");break;
        case 5:
        case 4:
        printf("A");break;
        
        case 3:case 2:case 1:case 0:
        printf("D");break;

    }
    
 else
        printf("invalid");
    
        return 0;
    
    
    
}
