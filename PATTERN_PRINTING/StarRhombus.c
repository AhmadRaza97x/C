#include<stdio.h>

  // PATTERN
  //       ****
  //      ****
  //     ****
  //    ****
  
int main()
{
    int n;
    printf("ENTER ROW : ");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
      for (int space = 1; space <= n-row; space++)
        printf(" ");
        
      for ( int star = 1; star <= n; star++)
        printf("*");
        
      printf("\n");
    }

    return 0;
}