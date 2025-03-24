#include<stdio.h>

    // ODD EVEN

int main()
{
    int x;
    printf("ENTER NUMBER : ");
    scanf("%d",&x);
    
    if (x%2==0)
        printf("EVEN NUMBER");
        
//  if (x%2!=0)
//      printf("ODD NUMBER");
    
    else
        printf("ODD NUMBER");
    
    return 0;
}
