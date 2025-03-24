#include<stdio.h>

    // STAIR PATH COUNT BY RECURSION
    // 1 OR 2 STEPS AT A TIME
    
int stair(int n)
{
    if (n==1 || n==2)
        return n;

    else
    {
        int totalways=stair(n-1) + stair(n-2);
        return totalways;
    }
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    int ways=stair(n);
    printf("%d",ways);
    return 0;
}
