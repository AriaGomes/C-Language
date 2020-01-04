/*
	PROGRAM:  Assign2.c
	AUTHOR:   Clive Jr.
	AUTHOR:   Aria Gomes
	DATE:     November 10 2019
	TOPIC:    Assignment 2
	PURPOSE:  Link Lists creation and Manipulation Excercise Assignmnet
*/

#include <stdlib.h>
#include <stdio.h>
#include "Node.h"


int main() 
{
	int i;
	node_t *head = (node_t*) malloc(sizeof(node_t));			
	node_t* stud = (node_t*) malloc(sizeof(node_t)); /* Node declaration and memory allocation for the first 3 students */
	node_t* stud1 = (node_t*) malloc(sizeof(node_t));
	node_t* stud2 = (node_t*) malloc(sizeof(node_t));
	
	head->student = (student_t*) malloc(sizeof(student_t));
	stud->student = (student_t*) malloc(sizeof(student_t)); /* Node memory allocation for student 1-3's data members */
	stud1->student = (student_t*) malloc(sizeof(student_t)); 
	stud2->student = (student_t*) malloc(sizeof(student_t));
	
	stud->student->firstName = (char*) malloc(sizeof(char*));
	stud->student->lastName = (char*) malloc(sizeof(char*));
	stud1->student->firstName = (char*) malloc(sizeof(char*));
	stud1->student->lastName = (char*) malloc(sizeof(char*));
	stud2->student->firstName = (char*) malloc(sizeof(char*));
	stud2->student->lastName = (char*) malloc(sizeof(char*));

	printf("First, you will enter 3 students names that will be added to the start of the list.\n ");

	for(i= 1; i < 4; i++) /* Prompts User to enter first and last name for students 1-3, uses addToStart method to add them to LList */
	{
		if (i == 1) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud->student->firstName);
			printf("Enter the last name of student%d: ", i); 
			scanf("%s", stud->student->lastName);
			addToStart(&head, stud->student); /* Adds names to LList using addToStart Method */
		}
		else if (i == 2) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud1->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud1->student->lastName);
			addToStart(&head, stud1->student);
		}
		else if (i == 3) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud2->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud2->student->lastName);
			addToStart(&head, stud2->student);
		}
	}
	
	print_list(head);	/* Prints the current list */

/*------------------------------------------------------------------------------------------------------*/
	
	printf("Then, you will enter 3 students' names that will be added to the end of the list.\n");
	
	node_t* stud3 = (node_t*) malloc(sizeof(node_t));
	node_t* stud4 = (node_t*) malloc(sizeof(node_t));	/* Node declaration and memory allocation for students 4-6*/
	node_t* stud5 = (node_t*) malloc(sizeof(node_t));

	stud3->student = (student_t*) malloc(sizeof(student_t));
	stud4->student = (student_t*) malloc(sizeof(student_t)); /* Node memory allocation for student 1-3's data members */
	stud5->student = (student_t*) malloc(sizeof(student_t));
	
	stud3->student->firstName = (char*) malloc(sizeof(char*));
	stud3->student->lastName = (char*) malloc(sizeof(char*));
	stud4->student->firstName = (char*) malloc(sizeof(char*));
	stud4->student->lastName = (char*) malloc(sizeof(char*));
	stud5->student->firstName = (char*) malloc(sizeof(char*));
	stud5->student->lastName = (char*) malloc(sizeof(char*));

	for(i= 4; i < 7; i++) 
	{
		if (i == 4) /* Prompts User to enter first and last name for students 4-6, uses addToStart method to add them to LList */
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud3->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud3->student->lastName);
			addToEnd(head, stud3->student); /* Adds names to LList using addToEnd Method */
		}
		else if (i == 5) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud4->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud4->student->lastName);
			addToEnd(head, stud4->student);
		}
		else if (i == 6) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud5->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud5->student->lastName);
			addToEnd(head, stud5->student);
		}
	}
	print_list(head);	/* Prints the current list */

/*-------------------------------------------------------------------------------*/

	printf("Then you will remove the first three students in the list.\n");

	removeFromStart(&head);
	removeFromStart(&head);	/* Removes 3 students using removeFromStart method */
	removeFromStart(&head);

	print_list(head);	/* Prints the current list */

	removeFromStart(&head);
	removeFromStart(&head);	/* Removes 3 students using removeFromStart method */
	removeFromStart(&head);

/*----------------------------------------------------------------------------------*/

	printf("By now, Your list should be empty, so you will enter 3 more students.\n");

	node_t* stud7 = (node_t*) malloc(sizeof(node_t));
	node_t* stud8 = (node_t*) malloc(sizeof(node_t));	/* Node declaration and memory allocation for students 7-9*/
	node_t* stud9 = (node_t*) malloc(sizeof(node_t));

	stud7->student = (student_t*) malloc(sizeof(student_t));
	stud8->student = (student_t*) malloc(sizeof(student_t)); /* Node memory allocation for student 1-3's data members */
	stud9->student = (student_t*) malloc(sizeof(student_t));
	
	stud9->student->firstName = (char*) malloc(sizeof(char*));
	stud7->student->lastName = (char*) malloc(sizeof(char*));
	stud7->student->firstName = (char*) malloc(sizeof(char*));
	stud9->student->lastName = (char*) malloc(sizeof(char*));
	stud8->student->firstName = (char*) malloc(sizeof(char*));
	stud8->student->lastName = (char*) malloc(sizeof(char*));

	for(i= 7; i < 10; i++) 
	{
		if (i == 7) /* Prompts User to enter first and last name for students 1-3, uses addToStart method to add them to LList */
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud7->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud7->student->lastName);
			addToStart(&head, stud7->student); /* Adds names to LList using addToStart Method */
		}
		else if (i == 8) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud8->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud8->student->lastName);
			addToStart(&head, stud8->student);
		}
		else if (i == 9) 
		{
			printf("Enter the first name of student%d: ", i);
			scanf("%s", stud9->student->firstName);
			printf("Enter the last name of student%d: ", i);
			scanf("%s", stud9->student->lastName);
			addToStart(&head, stud9->student);
		}
	}

	print_list(head); /* Prints the current list */

/*------------------------------------------------------------------------------*/

	printf("Finally, you will delete the second student in the list only.\n");
	
	remove_by_index(head, 2);  

	print_list(head);  /*Prints the current list*/ 

/*-------------------------------------------------------------------------------*/	
	return 0;
}