#include <stdio.h>

    // A,B,C WHICH IS GREATEST
        
int main()
{
    int a;
    printf("ENTER NUMBER a : ");
    scanf("%d", &a);

    int b;
    printf("ENTER NUMBER b : ");
    scanf("%d", &b);

    int c;
    printf("ENTER NUMBER c : " );  
    scanf("%d", &c);

    if (a > b && a > c)
        printf("%d IS GREATER",a);

    if (b > a && b > c)
        printf("%d IS GREATER",b);

    if (c > b && a < c)
        printf("%d IS GREATER",c);
    
    return 0;
}