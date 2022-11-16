#include <stdio.h>

//We want the program to accept one command line argument
// - filename
//The program will create that file as a text file
//and store some sample textual data in it.


//Sample text data, an array of 10-strings.
//Each string statically initialized. Compiler will put
//only such strings in a separate memory block and put
//a NULL byte at the end of each string
#define NUM_PROVERBS 12

char *proverbs[NUM_PROVERBS] = {
	"===== Some English Proverbs =====\n",
	"  1. Honesty is the Best Policy.\n",
	"  2. Don't judge a book by it's cover.\n",
	"  3. An apple a day keeps Doctor Away.\n",
	"  4. Better late than never.\n",
	"  5. Rome wasn't built in a day.\n",
	"  6. Actions speak louder than words.\n",
	"  7. Out of sight, out of mind.\n",
	"  8. It’s the tip of the iceberg.\n",
	"  9. Learn to walk before you run.\n",
	" 10. First things first.\n",
	"========= End of Proverbs =========\n"
};

int main(int argc, char* argv[]) {
	//make sure we got correct number of arguments
	if (argc != 2) {
		fprintf(stderr, "USAGE: FileWriteSimple <file_to_write_to>\n");
		return -1;
	}

	//Got correct set of arguments.
	//argv[1] -> file to create
	//We will create a text file. Mode used "w"rite
	FILE* pFile = fopen(argv[1], "w");

	if( pFile != NULL) {
		//File opened successfully.

		for(int i=0; i<NUM_PROVERBS; i++) {
			fputs(proverbs[i], pFile);
		}

		//Done with the file, close it.
		fclose(pFile);
	} else {
		//File Open failed.
		fprintf(stderr, "(%s) could not be opened.\n", argv[1]);
		return -2;
	}

	//Done
	return 0;
}