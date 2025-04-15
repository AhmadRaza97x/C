#include<stdio.h>

    // USING RECURSION
    // A KI POWER B

int power(int x,int y)
{
    if (y==0)
        return 1;

    else
    {
        x=x*power(x,y-1);
        return x;
    }
}

int main()
{
    int a;
    printf("ENTER A : ");
    scanf("%d",&a);

    int b;
    printf("ENTER B : ");
    scanf("%d",&b);

    int p=power(a,b);
    printf("%d",p);

    return 0;
}
