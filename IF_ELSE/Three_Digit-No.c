#include<stdio.h>

    //MULTIPLE CONDITION
    // THREE DIGIT NO. OR NOT

int main()
{
    int n;
    printf("ENTER NUMBER : ");
    scanf("%d",&n);

    if (n>99 && n<1000)     //&& USE FOR AND,  || USE FOR OR 
        printf("ITS THREE DIGIT NUMER");

    else
        printf("ITS NOT THREE DIGIT NUMBER");
    
    return 0;
}
