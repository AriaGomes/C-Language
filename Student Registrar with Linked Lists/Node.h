#ifndef Node_h
#define Node_h

#include <stdio.h>
/* Add student struct and Node struct */
	typedef struct student {
		char* firstName;
		char* lastName;
	}student_t;

	typedef struct Node {
		student_t *student;
		struct Node *next;
	}node_t;

/*
 Prints all student names in the following format
 LastName, firstName
 */
void print_list (node_t * head);

/*
 Adds a new node to the end of the list
 */
void addToEnd(node_t **head, student_t *student);

/*
 Adds a new node to the beginning of thr list
 */
void addToStart(node_t ** head, student_t *student);

/*
 Remove the first node in the list
 */
void removeFromStart(node_t ** head);

/*
 Removes the last node in the list
 */
void removeLast(node_t **head);

/*
 Removes a node by index
 */
void remove_by_index(node_t ** head, int n);


#endif /* Node_h */
