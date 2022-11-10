#include <stdio.h>

int main(void) {
	//Step 1: Define a simple 2D array of ints
	int matrix[2][2];

	//How are the elements accessed
	//2 indices that are indepdent of each other
	//     | matrix[0][0] | matrix[0][1] |
	//     | matrix[1][0] | matrix[1][1] |
	//

	//Step 2: Initialize the 2D array by accessing each element independently
	matrix[0][0] = 10;
	matrix[0][1] = 20;
	matrix[1][0] = 30;
	matrix[1][1] = 40;


	//Step 3: How are the elements accessed in the 2D array?
	// Use 2 separate indices
	printf("----  Accessing random elements in the 2D array ------\n");
	printf(" Row 0, Col 1: %d\n", matrix[0][1]);
	printf(" Row 1, Col 0: %d\n", matrix[1][0]);

	//Step 4: How does the 2D Array look in memory?
	//How is it stored? 
	//   Are the rows stored first and then the columns OR
	//   Are the columns stored first and then the rows?
	//This is important because computer memory is linear - bytes follow
	//each other. Its 1-dimensional. So how are the 2D arrays stored?
	printf("---- How the arrays are stored in memory?\n");
	printf("Row 0 is at address: %p\n", &matrix[0]);
	printf("Row 0, Col 1 is at address: %p\n", &matrix[0][1]);
	printf("Row 1 is at address: %p\n", &matrix[1]);
	printf("Row 1, Col 1 is at address: %p\n", &matrix[1][1]);

	//Step 5: Understand the output of Step 4 from the printed addresses
	// Exercise: What do you think on how the array is stored?


	//Step 6: Verify your Step 5 answer with the help of GDB/LLDB
	//  Take the array dump and ascertain your observations.
	

	//Done
	return 0;

}