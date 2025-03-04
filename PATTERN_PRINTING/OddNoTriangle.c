#include<stdio.h>

    // ODD NO. TRIANGLE
    // 1
    // 1 3
    // 1 3 5
    
int main()
{
    int n;
    printf("ENTER ROWS : ");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)    
    {       
        int a=1;     

        for (int j = 1; j <=i; j++)  
        {
            printf("%d ",a);
            a=a+2;
        }

       printf("\n");
    }

    return 0;
}