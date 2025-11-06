/*
NAME: Moses Ouma Ochola 
ADM :PA106/G/28795/25
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "results.dat"
#define NAME_SIZE 50

// i. Defines a structure to hold the student information.
struct student{
	char name[NAME_SIZE];
	int registration_number;
	int total_marks;
};

int main(){
	FILE *filePointer;
	struct student student_record;
	
	//Open the file in read binary mode ("rb")
	filePointer = fopen(FILENAME,"rb");
	
	if(filePointer == NULL){
		perror("Error opening file");
		return 1;
	}
	printf("--- Reading Student Records ---\n");
	
	//ii.Reads all student records from the binary file.
	// The loop continues as long as fread successfully reads one full struct(size 1)
	while(fread(&student_record, sizeof(struct student), 1, filePointer) == 1){
		
		// iii. Displays the name and marks of each student on the screen.
		
		printf("Name: %s, Reg No: %d, Marks: %d\n",
		
		student_record.name,
		student_record.registration_number,
		student_record.total_marks);
			}
			
			//Proper file closing
			if (fclose(filePointer) == EOF){
				perror("Error closing file");
			}
			printf("--- Reading complete ---\n");
			
			return 0;
		
}