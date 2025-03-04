#include<stdio.h>

    // TAKE STRING AS POINTER

int main()
{
    char str[]="MOHAMMAD AHMAD RAZA";
    char *ptr=str;
    int i=0;
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    
    return 0;
}
