#include<stdio.h>

    // PATTERN
    // 1.   4 4 4 4 4 4 4
    // 2.   4 3 3 3 3 3 4
    // 3.   4 3 2 2 2 3 4
    // 4.   4 3 2 1 2 3 4
    // 5.   4 3 2 2 2 3 4
    // 6.   4 3 3 3 3 3 4
    // 7.   4 4 4 4 4 4 4

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);
   
    for (int i = 1; i <= 2*n-1; i++)
    {
        for ( int j = 1; j <=2*n-1; j++)
        {
            int a=i;
            if (a>n) 
                a=2*n-i;

            int b=j;
            if (b>n) 
                b=2*n-j;

            if (a<=b) 
                printf("%d ",n+1-a);

            else 
                printf("%d ",n+1-b);
          
        }
        printf("\n");
    }
    
    return 0;
}
