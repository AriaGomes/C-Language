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
	bool mulOf3 = false;
	bool mulOf7 = false;

	for(int i = 1; i <= 100; i++) /* Main loop 1-100 */
	{
		mulOf3 = false;
		mulOf7 = false;

			if(i % 3 == 0) /* Checks for multiples of 3 using modulus */
				mulOf3 = true;
			else
				mulOf3 = false;


			if(i % 7 == 0) /* Checks for multiples of 7 using modulus */
				mulOf7 = true;
			else
				mulOf7 = false;

		printf("\n%d", i); /* Prints the current number to the console */

		if(mulOf3 && mulOf7)
			printf("  I'm multiple of 3 & 7!!!");
		else if(mulOf7)
			printf("  I'm multiple of 7!!!");  /* Checks if the current number is also a multiple of 3, 7 or both and prints next to the number */
		else if(mulOf3)
			printf("  I'm multiple of 3!!!");

	}
	return EXIT_SUCCESS;
}
