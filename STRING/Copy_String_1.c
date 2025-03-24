#include<stdio.h>

    // COPY STRING IN ANOTHER STRING
    // DEEP COPY

int main()
{
    char *str1="MOHAMMAD AHMAD";
    char *str2;   // DIFFERENT POINTER STRING OR DEEP COPY
    str2=str1;
    str1="AHMAD RAZA";

    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}
