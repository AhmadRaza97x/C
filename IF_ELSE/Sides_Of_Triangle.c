#include <stdio.h>

    // FIND ITS A TRIANGLE OR NOT
    // BY GIGEN SIDES

int main()
{
    // a,b,c IS SIDES OF TRIANGLE
    
    int a;
    printf("ENTER SIDE a : ");
    scanf("%d", &a);

    int b;
    printf("ENTER SIDE b : ");
    scanf("%d", &b);

    int c;
    printf("ENTER SIDE c : ");
    scanf("%d", &c);

    int x = a + b;
    int y = b + c;
    int z = c + a;

    if (x > c && y > a && z > b)
        printf("IT IS A TRIANGLE");

    else
        printf("IT IS NOT A TRIANGLE");

    return 0;
}