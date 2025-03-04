#include<stdio.h>

    // LEAP YEAR
        
int main()
{
    int x;
    printf("ENTER NUMBER : ");
    scanf("%d",&x);

    if (x%4==0)
        printf("LEAP YEAR");
    
    else
        printf("NOT LEAP YEAR");
    
    return 0;
}
