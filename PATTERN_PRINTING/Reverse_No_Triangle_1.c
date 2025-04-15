#include<stdio.h>

  // PATTERN
  //..     1
  //..   1 2
  //.. 1 2 3
  // 1 2 3 4

int main()
{
    int n;
    printf("ENTER ROW : ");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
      for (int space = 1; space <= n-row; space++)   
        printf("  ");
       
      for ( int num = 1; num <= row; num++)      
        printf("%d ",num);
            
      printf("\n");
    }
    
    return 0;
}