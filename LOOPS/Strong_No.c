#include<stdio.h>

    // STRONG NO. -> SUM OF FACTORIAL OF DIGIT = GIVEN NO.
    // 145 = 1! + 4! + 5!

int main()
{
    int n;
    printf("ENTER NO. N : ");
    scanf("%d",&n);

    int a=n;
    int sum=0;

    while (n>0)
    {
        int l=n%10;
        n=n/10;
        int prod=1;

        for (int i = 1; i <=l; i++)
            prod=prod*i;
    
        sum=sum+prod;  
    }

    if (sum==a)
        printf("STRONG NO.");
        
    else
        printf("NOT STRONG NO.");
        
    return 0;
}