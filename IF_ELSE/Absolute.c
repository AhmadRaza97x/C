#include<stdio.h>

    // MOD OF ANY NUMBER

int main()
{
    int x;
    printf("ENTER NUMBER : ");
    scanf("%d",&x);

    if (x<0)
        x=x*(-1);

    printf("ABSOLUTE VALUE IS : %d",x);

    return 0;
}
 