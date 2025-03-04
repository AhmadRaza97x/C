#include<stdio.h>

    // TAKE STRING INPUT 
    // REVRESE IT
    
int main()
{
    char str[40];
    puts("ENTER STRING : ");
    fgets(str,sizeof(str),stdin);
// SIZE
    int size=0;
    int k=0;
    while (str[k]!='\0')
    {
        size++;
        k++;
    }
    for (int i = 0,j=size-1 ; i <= j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("REVERSE IS : ");
    puts(str);

    return 0;
}
