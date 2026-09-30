#include <stdio.h>
int main()
{
    int std, marks1, marks2, marks3;
    int avg;
    int subPro;
    char grade;
    printf("Enter number of students: ");
    scanf("%d", &std);
    for (int i = 0; i < std; i++)
    {
        printf("\nEnter Marks of First Subject: ");
        scanf("%d", &marks1);
        printf("Enter Marks of Second Subject: ");
        scanf("%d", &marks2);
        printf("Enter Marks of Third Subject: ");
        scanf("%d", &marks3);
        avg = (marks1 + marks2 + marks3) / 3;
        if (avg >= 60)
        {
            if (marks1 >= 40 && marks2 >= 40 && marks3 >= 40)
            {
                printf("\nYou Passed");
                subPro = 1;
            }
            else
            {
                printf("\nYou Failed Subject Criteria");
                subPro = 0;
            }
        }
        else
        {
            printf("\nYou Failed");
            subPro = 0;
        }

        switch (avg / 10)
        {
        case 10:
        case 9:
            grade = 'A';
            break;

        case 8:
            grade = 'B';
            break;

        case 7:
            grade = 'C';
            break;

        case 6:
            grade = 'D';
            break;

        case 5:
            grade = 'F';
            break;

        default:
            grade = 'F';
            break;
        }

        printf("\n\n************** Report Card **************\n");
        printf("Average: %d\n", avg);
        printf("You Got an: %c", grade);

        subPro == 1 ? printf("\nPassed..........") : printf("\nFailed........(Subject Insufficiency)");
        printf("\n*****************************************\n");
    }
    return 0;
}
