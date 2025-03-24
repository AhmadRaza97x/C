#include <stdio.h>

    // NESTED IF ELSE KE ANDER IF ELSE
        
int main()
{
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0)
    {
        if (n%15!=0)
            printf("IT IS DIVISIBLE BY 3 OR 5");
        
        else
            printf("IT IS DIVISIBLE BY 15");    
    }

    else
        printf("NEITHER DIVISIBLE BY 3 NOR 5");

    return 0;
}
