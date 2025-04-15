#include<stdio.h>

    // QUESTION
    
int main()
{
    int a[5] ={10,20,30,40,50};
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",a+1);
    printf("%d\n",&a+1);  // YE TRICKY HAI
    printf("%d\n",*(a+1)); 

    return 0;
}
