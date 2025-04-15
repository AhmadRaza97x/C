#include<stdio.h>

   //GREATEST OF 4 NO.

int main()
{
    int a,b,c,d;
    printf("ENTER 4 NO. : ");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);

    (a>b && a>c && a>d) ? printf("%d",a): (b>c && b>d) ? printf("%d",b) : (c>d) ? printf("%d",c) : printf("%d",d);
    
    return 0;
}
