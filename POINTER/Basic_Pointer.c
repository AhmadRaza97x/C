#include<stdio.h>

    // POINTER ADDRESS KO STORE AUR PRINT KRTA H

int main()
{
    int a=5;
    int* x=&a;           // YE ADDRESS KO STORE KRTA H

    printf("%p\n",x);    //%P ADDRESS KO PRINT KRTA H  // YE A KA ADDRESS H
    printf("%p",&x);     // YE X KA ADDRESS H

    return 0;
}
