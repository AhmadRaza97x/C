#include<stdio.h>
#include<string.h>

    // CRICKETER DATA LIST

int main()
{
    typedef struct Cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int No_Of_Matches;
        float average_runs;

    }Cricketer;

// TAKING USER INPUT

    Cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("ENTER FIRST NAME : ");
        scanf("%s",arr[i].firstname);
        printf("ENTER LAST NAME : ");
        scanf("%s",arr[i].lastname);
        printf("ENTER AGE OF : ");
        scanf("%d",&arr[i].age);
        printf("ENTER NO. OF MATCHES : ");
        scanf("%d",&arr[i].No_Of_Matches);
        printf("ENTER AVERAGE RUNS : ");
        scanf("%f",&arr[i].average_runs);
        printf("\n");
    }

// PRINTING

    for (int i = 0; i < 3; i++)
    {
        printf("\nNAME : %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("AGE : %d\n",arr[i].age);
        printf("NO. OF MATCHES : %d\n",arr[i].No_Of_Matches);
        printf("AVERAGE RUNS : %f\n",arr[i].average_runs);
        printf("\n");
    }
    
    return 0;
}
