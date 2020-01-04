
/*
	PROGRAM:  Node.c
	AUTHOR:   Clive Jr.
	AUTHOR:   Aria Gomez
	DATE:     November 10 2019
	TOPIC:    Assignment 2
	PURPOSE:  Link Lists creation and Manipulation Excercise Assignmnet
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

void addToStart(node_t **head, student_t *student) 
{
	node_t* new_node = (node_t*) malloc(sizeof(node_t)); /* Creates a new node to add to the Linked list later */
	new_node-> student = student; /* adds the parameter values to the new node */ 
	new_node -> next = (*head);
	*head = new_node; /* adds the node to the linked list */
}

void addToEnd(node_t **head, student_t *student) 
 {
	 /*Creates new node*/
	node_t *current = (node_t*) malloc(sizeof(node_t));
 	current = head;
    
	/*Traverses LList where current data member is NULL*/
    while(current->next != NULL)
        current = current->next;
    
    current->next = malloc(sizeof(node_t));
    current->student = student;
}

void removeFromStart(node_t **head) 
{

	node_t* current = *head;
	node_t* temp = (node_t*) malloc(sizeof(node_t));
	temp = current->next;
	current-> next = NULL; /* gives the current node the value of NULL */
	current = temp;
	*head = current; /* adds the node to the linked list */
}

void removeLast(node_t **head) 
{
	node_t* current = head;
	/* Traverses LList where node is NULL */
	while(current->next->next != NULL) 
	{
		current = current -> next;
	}
	current->next = NULL;
	*head = current; /* adds the node to the linked list */
}

void remove_by_index(node_t **head, int n) 
{
	int i;
	node_t *current = (node_t*)malloc(sizeof(node_t));
    node_t *previous = (node_t*)malloc(sizeof(node_t));
    current=head;
	/* Traverses the node to the variable n given in the parameters */
    for(i=1; i < n; i++)
    {
       previous=current;
       current=current->next;
    }
    previous->next=current->next;
    current->student->firstName = NULL;
	current->student->lastName = NULL; /* adds the node to the linked list */
}

void print_list(node_t *head) 
{
	/*Prints any non NULL data members in the Linked List */
	while(head->next != NULL) 
	{
		printf("%s %s\n", head->student->firstName, head->student->lastName);
		head = head -> next;
	}

}
