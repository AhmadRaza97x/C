#include <stdio.h>
int main()

        // AP = 100 97 94 ...... TILL POSSITIVE VALUE
        
{
    int A=100;

    for (int i = 1; A>=0; i = i + 1)
    {
        printf("%d ", A);
        A=A-3;
    }

    return 0;
}