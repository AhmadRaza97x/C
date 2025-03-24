#include<stdio.h>

    // INSERT A NEW CHARCTER IN STRING

int main()
{
    char str[20]="COLLEGE";
    
// INSER 'L'IN 2nd INDEX & PRINT COLLLEGE
    for (int i = 6; i >= 2 ; i--)
    {
        str[i+1]=str[i];
    }
    str[2]='L';
    printf("%s",str);
    
    return 0;
}