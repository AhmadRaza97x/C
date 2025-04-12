#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    // DATE COMPARE

int main()
{
    typedef struct Date
    {
        int day;
        int month;
        int year;
    }Date;

    Date a,b,c;

// a -> 5/12/1999
// b -> 19/1/2023 

    a.day = 05;
    a.month = 12;
    a.year = 1999;

    b.day = 19;
    b.month = 01;
    b.year = 2023;

    bool flag = true;
    if (a.day != b.day) flag =false;
    if (a.month != b.month) flag =false;
    if (a.year != b.year) flag =false;

    if (flag == true) printf("EQUAL");
    else printf("UNEQUAL");

    c = a;  // FEATURE 1
    
    return 0;
}
