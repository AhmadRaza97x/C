#include<stdio.h> 

    // SUM DIGITS

int main()
{   
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);

    int sum=0;

   int i=0;
   while (n!=0)
   {
    int ld=n%10;    //ld =LAST DIGIT
    n=n/10;
    sum=sum+ld;
  
    i++;
   }

   printf("%d",sum);
   
    return 0;
}