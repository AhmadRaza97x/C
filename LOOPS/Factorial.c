#include<stdio.h>

    // FACTORIAL
    
int main()
{
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);
    int product=1;

    for (int i = 1; i <= n; i++)
    {
        product=product*i;
        //  printf("%d\n",product);  [FOR UPTO N FACTORIAL]
    }
    printf("%d",product);

    return 0;
}
