#include<stdio.h>

    // TOWER OF HANOI
    // DISK PROBLEM
    // BY RECURSION

void  TOH(int n,char source,char destination,char aux)
{
    if (n==1)
    {
        printf("%c-->%c\n",source,destination);
        return;
    }
    
    else
    {
        TOH(n-1,source,aux,destination);
        printf("%c-->%c\n",source,destination);
        TOH(n-1,aux,destination,source);
    }
}

int main()
{
    int n;
    printf("ENTER NO. OF DISK N : ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}

