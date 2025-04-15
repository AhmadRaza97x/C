#include<stdio.h>

    // ARMSTRONG
    
int main()
{
    int n,a,sum=0,l,count=0,prod,b,i;
    printf("ENTER n : ");
    scanf("%d",&n);

    b=a=n;

    while (n!=0)
    {
        n=n/10;
        count++;  
    }

    while (a!=0)
    {
        l=a%10;
        a=a/10;
        prod=1;

        for (int i = 1; i <= count; i++)
            prod=prod*l;
            sum=sum+prod;
    }

    if (sum==b)
       printf("ARMSTRONG");

    else
        printf("NOT ARMSTRONG");
        
    return 0;
}