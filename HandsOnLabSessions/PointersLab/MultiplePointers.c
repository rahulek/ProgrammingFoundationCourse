#include <stdio.h>

int main(void) {
	//Step 1
	//Define a simple int variable and store 100 in it
	int score = 100;

	//Step 2
	//Create a pointer to score
	//Score is an int, thefore, pointer to it would be int*
	int* pScore = &score;

	//Step 3
	//Create one more pointer to score
	//Score is an int, thefore, pointer to it would be int*
	int *pScoreAnother = &score;

	//Where is score in memory?
	//Because pScore and pScoreAnother are pointing to the same "score",
	//their values must be same as the address of "score"
	printf("score's mem address: %p\n", &score);
	printf("pScore: %p\n", pScore);
	printf("pScoreAnother: %p\n", pScoreAnother);

	//Step 4:
	//Check the result of Step 3.
	//pScore and pScoreAnother point to "score"
	//Thefore &score should be the same as values in pScore and pScoreAnother


	//Step 5: Now, you can modify score in 3 ways
	//   1. Direct modification: for example: score = 200;
	//   2. Indirect using pScore  OR
	//   3. Indirect using pScoreAnother
	//Also,
	//   1. You can modify(write) the variable with pointer
	//   2. Read back using the direct reference

	printf("-----------------\n");

	//Direct reference
	score = 200;
	printf("New Score is: %d\n", score);

	//Indirect change through pScore
	*pScore = 999;   //*pScore means dereference pScore and store 999 there
	                 //becuase pScore is pointing to "score", this will set
	                 //"score" to 999 indirectly
	printf("Modified with pScore but reading directly: %d\n", score);

	//Indirect change through pScoreAnother
	//Same explanation as above
	*pScoreAnother = 0;
	printf("Modified with pScoreAnother but reading directly: %d\n", score);


	//Step 6: LLDB/GDB Verification
	//Exercise for the students


	//Done
	return 0;
}