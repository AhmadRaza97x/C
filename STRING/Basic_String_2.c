#include<stdio.h>

    // UPDATE ELEMENT
    // RESULT = M a M A D

int main()
{
    char str[]="AHMAD";
    str[0]='M';
    str[1]=97;
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c ",str[i]);
        i++;
    }
    
    return 0;
}
