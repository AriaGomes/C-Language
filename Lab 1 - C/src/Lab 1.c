/*
 ============================================================================
 Name        : Lab.c
 Author      : Aria Gomes
 Version     : 1.0
 Copyright   : Stealing is Wrong!
 Description : Lab 1: Checks for multiples of 3's and 7's through 1-100.
 ============================================================================
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mulOf3 = 0;
	int mulOf7 = 0;
	int i = 1;

	for(i = 1; i <= 100; i++) /* Main loop 1-100 */
	{

			if(i % 3 == 0) /* Checks for multiples of 3 using modulus */
				mulOf3 = 1;
			else
				mulOf3 = 0;

			if(i % 7 == 0) /* Checks for multiples of 7 using modulus */
				mulOf7 = 1;
			else
				mulOf7 = 0;

		printf("\n%d", i); /* Prints the current number to the console */

		if(mulOf3 == 1 && mulOf7 == 1)
			printf("  I'm multiple of 3 & 7!!!");
		else if(mulOf7 == 1)
			printf("  I'm multiple of 7!!!");  /* Checks if the current number is also a multiple of 3, 7 or both and prints next to the number */
		else if(mulOf3 == 1)
			printf("  I'm multiple of 3!!!");
	}
	return EXIT_SUCCESS;
}
