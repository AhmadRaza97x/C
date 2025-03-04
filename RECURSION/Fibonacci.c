#include<stdio.h>

    // USING RECURSION
    // Nth FIBONACCI NO.

int fibonacci(int x)
{
    if (x==1 || x==2)
        return 1;

    else
    {
        int y=fibonacci(x-1) + fibonacci(x-2);
        return y;
    }
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    int f=fibonacci(n);
    printf("%d",f);

    return 0;
}
