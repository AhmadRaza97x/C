#include<stdio.h>

    // COUNT NO. OF DIGIT
    
int main()
{
    int n;
    printf("ENTER NUMBER n : ");
    scanf("%d",&n);

    int count=0;
    while (n>0)
    {
        n=n/10;
        count++;
    }

    printf("THE NO. OF DIGIT IS : %d",count);
    

    return 0;
}
