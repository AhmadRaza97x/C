#include<stdio.h>

    // PATTERN
    // *****
    // *****
    
int main()
{
    int rows;
    printf("ENTER ROWS : ");
    scanf("%d",&rows);

    int columns;
    printf("ENTER COLUMNS : ");
    scanf("%d",&columns);

    for (int i = 1; i<=rows; i++)    //OUTER LOOP -> NO. OF LINES
    {
        for (int i = 1; i <=columns; i++)  //INNER LOOP -> NO. OF STARS IN EACH LINES
            printf("*");
        
        printf("\n");
    }
    
    return 0;
}
