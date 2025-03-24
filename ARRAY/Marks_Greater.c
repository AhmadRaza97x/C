#include<stdio.h>

    // MARKS ARRAY OF N STUDENT IF MARKS < 35 THEN PRINT ITS ROLL NO.

int main()
{

    int marks[10] = {89,35,34,26,15,94,64,26,49};

    printf("FAILED INDEX / ROLL NO. = ");
    
    for (int i = 0; i < 10; i++)
    {
        if (marks[i]<35)
            printf("%d ",i);
    }
    
    return 0;
}


// #include<stdio.h>

//     // MARKS ARRAY OF N STUDENT IF MARKS < 35 THEN PRINT ITS ROLL NO.

// int main()
// {
//     int size;
//     printf("ENTER NO. OF STUDENT : ");
//     scanf("%d",&size);

//     int marks[size];

//     for (int i = 0; i < size; i++)
//     {
//         printf("ENTER A[%d] = ",i);
//         scanf("%d",&marks[i]);
//     }

//     printf("\n");
//     printf("MARKS = ");

//     for (int i = 0; i < size; i++)
//         printf("%d ",marks[i]);

//     printf("\n");
//     printf("FAILED ROLL NO. = ");
    
//     for (int i = 0; i < size; i++)
//     {
//         if (marks[i]<35)
//             printf("%d ",i);
//     }
    
//     return 0;
// }
