#include<stdio.h>

    // ARRAY

int main()
{
    int a[4]={10,20,30,40};

    printf("%u\n",a[1]);    // ALL 4 PRINTF ARE SAME
    printf("%u\n",*(a+1));    // IT PRINT 20
    printf("%u\n",1[a]);   
    printf("%u\n",*(1+a));

    
 
    return 0;

}
