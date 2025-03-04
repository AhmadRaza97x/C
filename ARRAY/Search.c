#include<stdio.h>
#include<stdbool.h>

    // SEARCH VALUE IN ARRAY

void search(int a[],int x)
{
    bool b = false; // BOOL DATA TYPE STORE ONLY TRUE OR FALSE

    for (int i = 0; i <= 8; i++)
    {
        if (x==a[i])
        {
            b=true;
            printf("INDEX = %d",i);
            break;
        }
    }
    if (b==false)
        printf("NO VALUE FOUND");
    
}
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int x;
    printf("ENTER X : ");
    scanf("%d",&x);

    search(a,x);

    return 0;
}
