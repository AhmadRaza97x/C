#include <stdio.h>

    // WHICH IS GREATER
        
int main()
{
    int a, b, c;
    printf("ENTER NUMBER a : ");
    scanf("%d", &a);

    printf("ENTER NUMBER b : ");
    scanf("%d", &b);

    printf("ENTER NUMBER c : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
            printf("%d IS GREATEST", a);
        
        else
            printf("%d IS GREATEST", c);
    }

    else
    {
        if (b > c)
            printf("%d IS GREATEST", b);
        
        else
            printf("%d IS GREATEST", c);
    }
    
    return 0;
}