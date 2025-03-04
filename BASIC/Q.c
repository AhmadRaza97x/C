#include<stdio.h>

    //FIND REMAINDER

int main()
{
    int a,b;         //a>b 
                    //WE TAKE int BECAUSE IT GIVE ONLY QUETENT INSTEAD OF float

    printf("ENTER A : ");
    scanf("%d",&a);

    printf("ENTER B : ");
    scanf("%d",&b);

    int q=a/b;      //q=QUETENT
    int r=a-q*b;    //r=REMAINDER  
    
    printf("REMAINDER IS WHEN %d DIVIDED BY %d IS : %d",a,b,r);
    
    return 0;
}
