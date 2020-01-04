/*
	PROGRAM:  division.c
	AUTHOR:   Ali Aldosary
	AUTHOR:   Aria Gomes
	DATE:     25/10/19
	TOPIC:    Lab4
	PURPOSE:  student-course registrar
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*----------------------------------------------------------------------------------------------------------------------------*/
typedef struct Course
{
	char courseCode[16];
	char courseName[16];
}Course;

typedef struct Student
{
	char id[16];
	char firstName[16];
	char lastName[16];
	Course course;
}Student;

void populateStudent(Student* students, int numOfStudents);
void displayStudent(Student* students, int numOfStudents);
int verifyCode(char code[16], int type);

int main()
{
	Student* students;
	int numOfStudents = 0;

	printf("How many students do you wish to enter = ");
	scanf("%d", &numOfStudents);
	students = malloc(numOfStudents * sizeof(Student));/*Alloc'ing student strux--*/
	populateStudent(students, numOfStudents);
	displayStudent(students, numOfStudents);

	return 0;
}

void populateStudent(struct Student* students, int numOfStudents)
{
	/*--------------------------------------------------------------------------------------------------------------------------*/
	int i;
	for (i = 0; i < numOfStudents; i++)
	{
		printf("Enter student #%d %s", i+1 ,"first name: ");
		scanf("%s", students[i].firstName);

		printf("Enter student Last name: ");
		scanf("%s", students[i].lastName);

		do {
			printf("Enter student ID: ");
			scanf("%s", students[i].id);/*---------------Verifies student ID-------------*/
		} while (verifyCode(students[i].id, 1) == 0);

		do {
			printf("Enter course code: ");
			scanf("%s", students[i].course.courseCode);
		} while (verifyCode(students[i].course.courseCode, 2) == 0);/*---------------Verifies course ID-------------*/

		printf("Enter course name: ");
		scanf(" %[^\t\n]s", students[i].course.courseName);/*---------------Accepts white spaces-------------*/
		printf("\n");
	}

	/*--------------------------------------------------------------------------------------------------------------------------*/
}
void displayStudent(Student* students, int numOfStudents)
{
	int i;

	for (i = 0; i < numOfStudents; i++)
	{
		printf("Student Name: %s %s\nStudent ID: %s\n", students[i].firstName, students[i].lastName, students[i].id);
		printf("Course Code: %s\n", students[i].course.courseCode);
		printf("Course Name: %s\n", students[i].course.courseName);
	}
}
int verifyCode(char code[16], int type)
{
	int i;
	int ln = strlen(code);
	if (type == 1)/*---------------Verifies student ID-------------*/
	{
		if (ln == 5)
		{
			for (i = 0; i < ln; i++)
				if (code[i] > 57 || code[i] < 48)
				{
					printf("Please enter integer values\n");
					return 0;
				}
			return type;
		}
		printf("Entry must be 5-Digits long\n");
		return 0;
	}/*---------------------------------------------------------*/

	if (type == 2)/*---------------Verifies course ID-------------*/
	{
		if (ln == 7)
		{
			for (i = 0; i < 3; i++)
				if (code[i] < 65 || code[i] > 122)
				{
					printf("first three characters must be a-Z\n");/*---------------Verifies Alphabets-------------*/
					return 0;
				}
			for (i = 3; i < 7; i++)
				if (code[i] > 57 || code[i] < 48)
				{
					printf("last four characters must be 0-9\n");/*---------------Verifies Numerics-------------*/
					return 0;
				}
			return type;
		}
		printf("invalid entry format must be CST8234\n");
		return 0;
	}/*---------------------------------------------------------*/
	return 0;
}