#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

	FILE* outFile;
	char* output = (char*)malloc(100 * sizeof(char));

	outFile = fopen("output.txt", "w");

	if (outFile == NULL)
	{
		printf("Unable to open output output.txt\n");
		exit(EXIT_FAILURE);
	}


	printf("Enter a string");
	scanf("%s", output);

	fprintf(outFile,"%s", output);
	scanf("% [^\n]", output);
	fclose(outFile);


	return 0;

}