#include<stdio.h>

    // PRE IN POST
    // PRINT ZIG ZAG
    // 1 KE LIYE == 111
    // 2 KE LIYE == 211121112
    // 3 KE LIYE == 3211121112321112111232111211123

void preinpost(int x)
{
    if (x==0)
        return;

    printf("%d",x);
    preinpost(x-1);
    printf("%d",x);
    preinpost(x-1);
    printf("%d",x);

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

