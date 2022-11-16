#include <stdio.h>

//We want the user to specify only one arguent
//   - the name of the file to read and display
//Therefore, we expect argc = 2 (program name + file name)
int main(int argc, char* argv[]) {
	if (argc != 2) {
		//Correct set of command line args were not provided.
		//Display the usage and return/exit
		fprintf(stderr, "USAGE: FileReadSimple <file_to_read>\n");
		return -1;
	}

	//Command Line args OK.
	//argv[0] -> name of the program (FileReadSimple)
	//argv[1] -> full path of the file to read
	printf("\n=====================\n");
	printf("File to read: %s\n", argv[1]);
	printf("=================\n");

	//Step 1: Open the file for the "r"ead operation
	FILE* pFile = fopen(argv[1], "r");

	//Step 2: fopen can fail. Handle the error correctly
	if (pFile != NULL) {
		//File was opended successfully, proceed.
		//Process the file one character at a  time

		//2 ways to read the file
		// character by characer - SLOW
		// line by line - FASTER

#if 0
		//feof() functions detects if eof(End-of-File) is reached
		while(!feof(pFile)) {
			char c = fgetc(pFile);
			printf("%c", c);
		} 
#else
		//We must have a line buffer for fgets() to store the line into
		//fgets() returns NULL when all lines finished/read
		char lineBuffer[100];
		while( fgets(&lineBuffer[0],   //store the line into this buffer
			         100,              //how big our buffer is
			         pFile             //File pointer
			        )) {
			printf("%s", lineBuffer);
		}
#endif

		printf("\n=======  Done =========\n");
		//Done with the processing, MUST close the file
		fclose(pFile);
	} else {
		//File Opening failed, display and error and return/finish
		fprintf(stderr, "(%s) could not be opened...Exiting...\n", argv[1]);
		return -2;   //or exit(-2);
	}

	//Done
	return 0;
}