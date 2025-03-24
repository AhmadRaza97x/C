#include<stdio.h>

    // PATTERN
    // 1
    // A B
    // 1 2 3
    // A B C D

int main()
{
    int n;
    printf("ENTER ROWS & COLUMNS : ");
    scanf("%d",&n);
    
    for (int i=1 ; i<=n ; i++)    
    {       
        int a=64;      

        if(i%2==0) 
        {      
            for (int j=1 ; j<=i ; j++)  
            {
                a=a+1;
                printf("%c",a);
            }
        }

        else
        {
            for (int k= 1; k <=i; k++)
                printf("%d",k);
        }
        
        printf("\n");
    }
    
    return 0;
}
