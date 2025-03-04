#include<stdio.h>
#include<string.h>

    // TAKING INPUY
    // %s
    // puts()
    // gets()

int main()
{
    char str[40];
    fgets(str,sizeof(str),stdin);
    puts(str);
    
    return 0;
}
