#include <stdio.h>
#include <stdlib.h>
void initializeCourses(char *courseName[], int courseNum);

int main()
{
    int studentNum, studentID, option;
    int exit = 1;

    printf("Enter number of students: ");
    scanf("%d", &studentNum);

    char *studentList = (char *)malloc(studentNum * sizeof(char));
    char *studentName[studentNum];
    for(int i = 0; i < studentNum; i++)
    {
        studentName[i] = (char *)malloc(sizeof(char));

        printf("Please enter an id for student %d: ", i+1);
        scanf("%d", &studentID);
    }

    initializeCourses(studentName, studentNum);

    while(exit != 0)
    {
        printf("--------------Main Menu--------------\n");
        printf("1. Calculate grade average\n");
        printf("2. dispaly grades for all courses \n");
        printf("Select an option: \n");
        scanf("%d", &option);
        if(option == 1)
        {
            printf("Your course and grades are: \n");
            for(int i = 0; i < studentNum; i++)
                printf("    %s : %d\n", studentName[i], studentList[i]);
        }

        if(option == 2)
            printf("Not Implemented\n");

        if(option == 0)
            exit = 0;
    }
    return 0;
}

void initializeCourses(char *courseName[], int courseNum)
{
    for (int i = 0; i < courseNum; i++)
    {
        printf("Enter name of course %d: ", i+1);
        scanf("%s", courseName[i]);
    }
}
