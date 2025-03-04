#include<stdio.h>

    // CHECK ARRAY IS PALINDROME OR NOT
    // 1 2 3 4 5 4 3 2 1

void reverse(int a[])
{
    int i=0;
    int j=5;

    while (i<=j)
    {
        if (a[i]!=a[j])
        {
            printf("NOT A PALINDROME"); 
            break;
        }
        else
        {
            i++;
            j--; 
        }
    }
    
    printf("X");

    return;   
}

int main(int argc, char const *argv[])
{
    int a[6] = {1,2,3,3,2,1};
    reverse(a);
    
    return 0;
}
