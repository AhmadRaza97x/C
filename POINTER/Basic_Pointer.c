#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;

    printf("%u\n",x);   // VALUE OF X
    printf("%u\n",&x);  // ADDRESS OF X
    printf("%u\n",*p);  // X KE ADDRESS PE JO VALUE HAI
    printf("%u\n",p);   // X KA ADDRESS
    printf("%u\n",&p);  // P KA ADDRESS
    
    return 0;
}
