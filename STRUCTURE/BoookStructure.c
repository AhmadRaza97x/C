#include<stdio.h>
#include<string.h>

    // BOOK STRUCTURE

int main()
{
    struct book  
    {
       char name[50];
       float price;
      int no_of_page;
    }a,b,c;

    a.price=411.5;
    a.no_of_page=100;
    strcpy(a.name,"MOHAMMAD");

    b.price=351.50;
    b.no_of_page=200;
    strcpy(b.name,"AHMAD");

    c.price=41.36;
    c.no_of_page=250;
    strcpy(c.name,"RAZA");



    printf("%d\n",a.no_of_page);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    printf("\n");

    printf("%d\n",b.no_of_page);
    printf("%f\n",b.price);
    printf("%s\n",b.name);

    printf("\n");

    printf("%d\n",c.no_of_page);
    printf("%f\n",c.price);
    printf("%s\n",c.name);


   
    return 0;
}
