#include<stdio.h>

    // HCF OF 2 NO. USING FUN
    
int min(int a, int b)
{
    if (a<b)
        return a;
    
    else
        return b;
}

int gcd(int a, int b)
{
    int hcf;

    for (int i = 1; i <= min(a,b); i++)
    {
        if (a%i==0 && b%i==0)
            hcf=i;
    }

    return hcf;
}

int main()
{
    int a;
    printf("ENTER A : ");
    scanf("%d",&a);

    int b;
    printf("ENTER B : ");
    scanf("%d",&b);

    int hcf=gcd(a,b);
    printf("HCF = %d",hcf);

    return 0;
}
