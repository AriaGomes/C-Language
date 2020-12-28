/*
 ============================================================================
 Name        : Assignment1.c
 Author      : Aria Gomes
 Version     : 1.0
 Copyright   : Stealing is Wrong!
 Description : Assignment 1:
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"
void initializeCourses(char *courseName[], int courseNum);
void displayRegTable(char studentList[], char *courseName[], int courseNum, int studentNum);

int main()
{
    int studentNum, studentID, courseNum, option;
    int exit = 0;

    printf("Enter number of students: ");
    scanf("%d", &studentNum);

    char *studentList = (char *)malloc(studentNum * sizeof(char));
    int index;
    for(index = 0; index < studentNum; index++)
    {
        printf("\tEnter an id for student %d: ", index+1);
        scanf("%d", &studentID);

        studentList[index] = studentID;
    }
    printf("\n\n");


    printf("Enter number of courses offered: ");
    scanf("%d", &courseNum);

    char *courseName[courseNum];
    initializeCourses(courseName, courseNum);

    while(exit != 1)
    {
        printf("--------------Main Menu--------------\n");
        printf("1. Register a student in a course\n");
        printf("2. Withdraw a student in a course\n");
        printf("3. Display registration table \n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);



        if(option == 1)
            printf("Not Implemented\n");

        if(option == 2)
            printf("Not Implemented\n");

        if(option == 3)
        {
            displayRegTable(studentList, courseName, courseNum, studentNum);
        }

        if(option == 4)
            exit = 1;
    }
    return 0;
}

void initializeCourses(char *courseName[], int courseNum)
{
    int index;

    for (index = 0; index < courseNum; index++)
    {
        courseName[index] = (char *)malloc(sizeof(char));

        printf("\tEnter name of course %d: ", index+1);
        scanf("%s", courseName[index]);
    }
}

void displayRegTable(char studentList[], char *courseName[], int courseNum, int studentNum)
{
    int index;
    printf("--------------------- Registration Table ---------------------\n\n");



    printf("\tStudent ID");
    for(index = 0; index < courseNum; index++)
    {
        printf("\t%s", courseName[index]);
        printf("\t|\t");
    }

    printf("\n");

    for(index = 0; index < studentNum; index++)
        printf("\t%d \n", studentList[index]);
}
