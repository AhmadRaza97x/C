#include<stdio.h>

  // PATTERN
  // 1
  // 01
  // 101
  
int main()
{
    int n;
    printf("ENTER ROWS : ");
    scanf("%d",&n);
    
    for (int i=1 ; i<=n ; i++)    
    {       
      for (int j=1 ; j<=i ; j++)  
      {
        if(i==j || (i-j)%2==0) 
          printf("1");

        else 
          printf("0");
      }

      printf("\n");
    }
    
    return 0;
}
