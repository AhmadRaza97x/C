#include<stdio.h>

    // ARRAY

int main()
{
    int a[4]={10,20,30,40};

    printf("%u\n",a);
    printf("%u\n",&a);      // ALL  4 PRINTF GIVE SAME OUTPUT
    printf("%u\n",&a[0]);
    printf("%u\n",&a[5]);       // YE A KA HI ADRESS DEGA

    printf("%u\n",a[5]);    // YE GARBAGE VALUE DEGA

    return 0;
}
