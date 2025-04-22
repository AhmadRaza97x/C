#include<stdio.h>
#include<stdlib.h>

    // DYNAMIC MEMORY ALLOCATION
    // TAKIN N INTEGER AS INPUT

int main()
{
    int n;
    printf("ENTER NO. OF INTEGER : ");
    scanf("%d",&n);
    int* ptr = (int*) malloc(n*sizeof(int));    // MEMORY ALLOCATION
    int* p = ptr;

// TAKING INPUT
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }

// PRINTING
int* t = p;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",(*p));
        p++;
    }
    
    return 0;
}
