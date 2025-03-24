#include<stdio.h>

    // USING RECURSION
    // SUM OF NATURAL NO.

int sum(int x)
{
    if (x==0)
        return 0;

    else
    {
        x=x+sum(x-1);
        return x;
    }
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    int add=sum(n);
    printf("%d",add);

    return 0;
}
