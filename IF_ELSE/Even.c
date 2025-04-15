#include<stdio.h>

    // EVEN NO. 

int main()
{
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);

// METHOD 1 : BITWISE &

    
    //if ((n&1)==0)
    //  printf("AHMAD");

    
// METHOD 2 : BITWISE RIGHT-LEFT SHIFT (>> <<)


     if (n==((n>>1)<<1))
        printf("AHMAD");

    return 0;
}
