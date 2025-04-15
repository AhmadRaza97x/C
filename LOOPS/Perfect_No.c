#include<stdio.h>

    // PERFECT NO.
    // N IS PERFECT NO. IF SUM OF ITS FACTOR EXCEPT N = N
    // 6 IS PERFECT ,1+2+3=6

int main()
{
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);
    int sum=0;

    for (int i = 1; i < n; i++)
    {
        if (n%i==0)      
            sum=sum+i;     
    }

    if (sum==n)
        printf("n IS PERFECT NO.");

    else
        printf("n IS NOT PERFECT N0.");
 
    return 0;
}
