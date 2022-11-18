#include <stdio.h>
#include <string.h>   //For the String functions

//Demo code the strlen()
int main(void) {
	//Step 1 : Define a static string
	// NULL termination is automatic
	char *pStr1 = "I am a statically initialized string.";

	//Step 2: Define a manually intiailized string
	//See how laborious and error prone the code gets!
	//"I am a string2" - NULL terminate is done manually
	char string2[15];
	string2[0] = 'I';
	string2[1] = ' ';
	string2[2] = 'a';
	string2[3] = 'm';
	string2[4] = ' ';
	string2[5] = 'a';
	string2[6] = ' ';
	string2[7] = 's';
	string2[8] = 't';
	string2[9] = 'r';
	string2[10] = 'i';
	string2[11] = 'n';
	string2[12] = 'g';
	string2[13] = '2';
	string2[14] = '\0';

	//strlen() is a standard C function
	//It takes a char* (string) input parameter and return the string's length
	//Because this is a C-String, its NULL terminated and that's how strlen()
	//can determine its length.
	printf("pStr1's length is: %lu\n", strlen(pStr1));
	printf("string2's length is: %lu\n", strlen(string2));


	//Exercise: WHAT WILL HAPPEN IF WE REMOVE THE NULL TERMINATION
	// at string2[14]???
	printf("Before removing NULL, string2's is now: %s.\n", string2);
	string2[14] = '?';   //NULL is gone, therefore the string is now NOT NULL terminated
	printf("Removed NULL, string2's length is now: %lu.\n", strlen(string2));

	//Done
	return 0;
}