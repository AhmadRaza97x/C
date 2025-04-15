#include<stdio.h>

  // PATTEN
  //      1
  //    1 2 3
  //  1 2 3 4 5
  
int main()
{
    int n;
    printf("ENTER ROW : ");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
      for (int space = 1; space <= n-row; space++)
        printf(" ");
    
      for ( int num = 1; num <= 2*row-1; num++)
        printf("%d",num);
       
      printf("\n");
    }
    
    return 0;
}