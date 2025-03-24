#include<stdio.h>

    // USING RECURSION
    // PRINT FIBONACCI SERIES

void fibonacci(int x)
{
    if (x==0)
        return ;

    static int a=1,b=1;
    printf("%d ",a);
    
    int sum = a+b;
    a=b;
    b=sum;
    
    fibonacci(x-1);

    return;
    
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    fibonacci(n);

    return 0;
}
