#include<stdio.h>

    // SWAP OF TWO NO.

void swap(int x, int y)
{
    x=x+y;
    y=x-y;
    x=x-y;

    printf("a = %d\n",x);
    printf("b = %d",y);

    return;
}

int main()
{
    int a;
    printf("ENTER A : ");
    scanf("%d",&a);

    int b;
    printf("ENTER B : ");
    scanf("%d",&b);

    swap(a,b);
 
    return 0;
}
