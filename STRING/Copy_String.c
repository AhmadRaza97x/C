#include<stdio.h>

    // COPY STRING IN ANOTHER STRING
    // SHALLOW COPY

int main()
{
    char str1[]="MOHAMMAD AHMAD";
    char *str2=str1;    // IT IS SAME STRING POINT OR SHALLOW COPY
    str1[0]='A';
    printf("%s",str2);
    return 0;
}
