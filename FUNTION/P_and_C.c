#include<stdio.h>

    // CLACULATE nCr
    
int factorial(int x)
{
    int fact=1;

    for (int i = 1; i <=x; i++)
        fact=fact*i;

    return fact;
    
}
int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    int r;
    printf("ENTER R : ");
    scanf("%d",&r);

    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);

    int nCr=nfact/(rfact*nrfact);
    printf("THE nCr OF %d & %d IS %d",n,r,nCr);

    return 0;
}
