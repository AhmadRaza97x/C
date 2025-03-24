#include<stdio.h>

    // LESS THAN AND GREATER THAN

int main()
{
    int l;
    printf("ENTER LENGTH : ");
    scanf("%d",&l);

    int b;
    printf("ENTER BREADTH : ");
    scanf("%d",&b);
    
    int a=l*b;
    int p=2*(l+b);

    if (a>p)
        printf("AREA GREATER THAN ITS PERIMETR");

    if (a<p)
        printf("PERIMETER GREATER THAN ITS AREA");

    if (a==p)
        printf("AREA = PERIMETER");
     
    return 0;
}
