#include<stdio.h>

    // IT IS CHARACTER ARRAY

int main()
{
    char a[]={'A','H','M','A','D','\0'};
    int i=0;
    while (a[i]!='\0')
    {
        printf("%c ",a[i]);
        i++;
    }
    

    printf("\n%c\n",a[2]);
    char ch='\0';  // NULL CHARACTER & ASCII = 0 & '\0' KBHI PRINT NHI HOTI 
    printf("%d\n",ch);
    printf("%c\n",ch);

    return 0;
}
