#include <stdio.h>
#include <string.h>

int roll[50], n = 0;
char name[50][50];
float marks[50];

void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Function to Add Student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;

    printf("Student Record Added Successfully!\n");
}

// Function to Display Students
void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to Search Student
void searchStudent()
{
    int i, r, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            printf("\nRecord Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Record Not Found!\n");
}

// Function to Delete Student
void deleteStudent()
{
    int i, j, r, found = 0;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++)
    {
        if(roll[i] == r)
        {
            for(j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            n--;
            found = 1;
            printf("Record Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Record Not Found!\n");
}