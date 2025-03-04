#include<stdio.h>

  // PATTERN
  // ********
  // *      *
  // ********
  
int main()
{
    int r;
    printf("ENTER ROWS : ");
    scanf("%d",&r);
    
    int c;
    printf("ENTER COLUMN : ");
    scanf("%d",&c);
    
    
    for (int i=1 ; i<=r ; i++)    
    {         
      for (int j=1 ; j<=c ; j++)  
      { 
        if(i==1 || j==1 || i==r || j==c)
          printf("*");

        else 
          printf(" ");
      }

       printf("\n");
    }
    
    return 0;
}