#include<stdio.h>

    // GRADE

int main()
{
    int x;
    printf("ENTER PERCENTAGE : ");
    scanf("%d",&x);
    
    if (x>80)
        printf("GRADE A");
    
    else
    {
        if (x>60)
            printf("B GRADE");
        
        else
        {
            if (x>40)
                printf("C GRADE");
            
            else
                printf("D GRADE");
        }
    }
    
    return 0;
}

