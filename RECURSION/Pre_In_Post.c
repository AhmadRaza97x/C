#include<stdio.h>

    // PRE IN POST
    // SO;VE IT BY TREE DAIGRAM

void preinpost(int x)
{
    if (x==0)
        return;

    printf("PRE %d\n",x);
    preinpost(x-1);
    printf("IN %d\n",x);
    preinpost(x-1);
    printf("POST %d\n",x);

    return;
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    preinpost(n);
   
    return 0;
}

