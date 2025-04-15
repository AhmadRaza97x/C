#include<stdio.h>

    // DECIMAL TO BINARY
    // BY RECURSION
    
void f(int n)
{
    if (n==0 || n==1)
    {
        printf("%d",n);
        return ;
    }
    else
    {
        f(n/2);
        printf("%d",n%2);
    }
}

void main()
{
    int a;
    printf("ENTER NO. a : ");
    scanf("%d",&a);
    f(a);
}