#include<stdio.h>
int main()

    //TERNARY OPERATION IS SHORT FORM OF IFELSE
    //USE FOR ONLY SINGLE IFELSE
    //EXP1 ? EXP2 : EXP3 ;

{
    int x;
    printf("ENTER X : ");
    scanf("%d",&x);

    x%2==0 ? printf("EVEN") : printf("ODD");
    
    return 0;
}
