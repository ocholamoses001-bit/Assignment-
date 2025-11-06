/*
NAME:MOSES OUMA
ADMISSION NUMBER:PA106/G/28795/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define FILENAME "borrowed books.txt"
//borrowed books.txt

int main(){
	FILE *filePointer;
	char bookTitle[100];//a simple array to hold the title
	
	do{
		// Get the book title
		printf("Enter the title (or type 'exit' to quit): ");
		if (fgets(bookTitle, sizeof(bookTitle), stdin) == NULL) {
			printf("\nNo input. Exiting.\n");
			break;
		}
		// Remove trailing newline if present
		size_t len = strlen(bookTitle);
		if (len > 0 && bookTitle[len - 1] == '\n') {
			bookTitle[len - 1] = '\0';
		}

		// If user typed exit, do not store it and exit loop
		if (strcmp(bookTitle, "exit") == 0) {
			printf("Exiting without storing 'exit'.\n");
			break;
		}

		// Open the file in Append mode("a")
		//This satisfies the requirement: "should not delete existing records."
		filePointer = fopen(FILENAME,"a");
		
		if(filePointer == NULL){
			perror("Error opening file");
			return 1;	 
		}
		// Store the title in the file with a newline
		fprintf(filePointer, "%s\n", bookTitle);
		
		// Close the file
		fclose(filePointer);
		
		// Display confirmation (Requirement ii)
		printf("\nSuccess! Title '%s' stored in %s.\n", bookTitle, FILENAME);
		
	} while (1);

	return 0;
}

