#include <stdio.h>

    // PRFITE LOSS
        
int main()
{
    int CP;
    printf("ENTER COST PRICE : ");
    scanf("%d", &CP);

    int SP;
    printf("ENTER SELLING PRICE : ");
    scanf("%d", &SP);

    if (SP > CP)
    {
        int x = SP - CP;
        printf("PROFIT = %d", x);
    }

    if (SP < CP)
    {
        int y = CP - SP;
        printf("LOSS = %d", y);
    }

    if (SP == CP)
        printf("NEITHER LOSS\nNOR PROFIT");

    return 0;
}
