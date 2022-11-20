#ifndef _MYHEADER_H_
#define _MYHEADER_H_

//Common definitions go in the application's header file
//These common definitions are manifest constants (#defines),
//struct types, typedef declarations, function prototypes


//Manifest Constants
#define MONDAY               1
#define TUESDAY              2
#define NUM_DAYS_PER_WEEK    7


//Struct Definitions
struct RomanEmperor {
	char fullName[35];      //full name of the emperor, 34 chars, 1 for NULL
	int  emperorSeqNum;     //emperor #  
	int  regnalYearStart;   //when did his reign start?
	int  regnalYearEnd;     //when did his reign end?
};


//Typedefs
typedef struct RomanEmperor *PROMANEMPEROR;


//Common function prototypes/signatures
void example1Func(char*);     //will be implemented in File1.c
void example2Func(char*);     //will be implemented in File2.c
void example3Func(char*);     //will be implemented in File3.c
void testFunc(char*);         //File1.c function



#endif