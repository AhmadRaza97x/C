#include<stdio.h>

    // SCOPE OF a
    
int main()
{
    int a=10;
    ++a;
    {
        ++a;
        printf("%d",a);
    }
    ++a;
    printf("%d",a);
    return 0;
}
