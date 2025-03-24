// #include<stdio.h>

  // PATTERN
  //     *
  //     *
  // * * * * *
  //     *
  //     *

// int main()
// {
//     int n;
//     printf("ENTER ROWS & COLUMNS : ");
//     scanf("%d",&n);
    
//     for (int i=1 ; i<=n ; i++)    
//     {           
//       if((n/2)+1!=i) 
//       {      
//         for (int j=1 ; j<=n/2 ; j++)  
//           printf(" ");

//         printf("*");
//       }

//       else
//       {
//         for (int k= 1; k <=n; k++)            
//           printf("*");           
//       }
        
//       printf("\n");
//     }

//     return 0;
// }


// METHOD 2


#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ROWS & COLUMNS : ");
    scanf("%d",&n);
    
    for (int i=1 ; i<=n ; i++)    
    {       
      for (int j=1 ; j<=n ; j++)  
      {
        if(i==n/2+1 || j==n/2+1) 
          printf("* ");

        else   
          printf("  ");
      }

      printf("\n");
    }

    return 0;
}
