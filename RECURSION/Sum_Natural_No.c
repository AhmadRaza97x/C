#include<stdio.h>

    // USING RECURSION
    // SUM OF NATURAL NO.

void sum(int x,int s)
{
    if (x==0)
    {
        printf("%d",s);
        return;
    }

    else
    {
        sum(x-1,s+x);
        return;
    }
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    sum(n,0);

    return 0;
}
