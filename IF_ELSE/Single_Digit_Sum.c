#include<stdio.h>

    // SINGLE DIGIT SUM
    
int main()
{
    int n;
    printf("ENTER NO. : ");
    scanf("%d",&n);

    if (n%9==0)
        printf("9");
        
    else
        printf("%d",n%9);
    
    return 0;
}
