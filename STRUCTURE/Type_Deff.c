#include<stdio.h>

     // TO CHANGE NAME OF DATA TYPE

int main()
{
// FOR FLOAT

    typedef float decimal; 
    decimal y = 3.14;
    printf("%f",y);

// FOR STRUCTURE

    typedef struct BOOK
    {
        int price;
        int page;
    }BOOK;

    BOOK a;
    BOOK b;
    BOOK c;
    
    return 0;
}
