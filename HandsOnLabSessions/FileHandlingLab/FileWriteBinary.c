#include <stdio.h>

//Define a struct for Student
//storing his/her name, totalMarks, totalOutOf
struct Student {
	char name[50];  //49 chars + 1 NULL
	int  totalMarks;
	int  totalOutOf;
};


int main(void) {
	//Step 1: Create 3 Students
	struct Student student1 = {
		"John Doe",
		500,
		600
	};

	struct Student student2 = {
		"Jane Doe",
		200,
		600,
	};

	struct Student student3 = {
		"Superman",
		600,
		600,
	};


	//Step 2: Create a new file
	//We plan to store 3 students directly to the file
	//Create a binary file is good because we want to
	//dump the memory contents to the file.
	//For the mode, we use "w"rite and "b"inary
	FILE* pFile = fopen("students.bin", "wb");
	if (pFile != NULL) {
		// File Opened successfully
		// Write each student
		// fread/fwrite functions are low level functions that read/write
		// memory contents to the file
		fwrite(&student1, sizeof(struct Student), 1, pFile);
		fwrite(&student2, sizeof(struct Student), 1, pFile);
		fwrite(&student3, sizeof(struct Student), 1, pFile);


		//Done with writing, close the file
		fclose(pFile);
	} else {
		printf("Binary file: students.bin could not be opened for writing.\n");
		return -2;
	}

	//Done
	return 0;
}