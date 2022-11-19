/* Short explanatory note */

// Typedefs are "C"s way to create new types of short-hands
// With built-in types, such as, int, float, double, char, short,
// and their pointer variants, the C language allows you to create
// your *own*, *custom* types.
// 
// The keyword "typedef" must be used to achieve this.
//
// For example, in your program, you are dealing exclusively with
// "unsigned short" types. Instead of declaring each variable with
// unsigned short in front of it, you can define a new type called
// USHORT as an alias (different name) to the unsigned short.
// With that, each unsigned short declaration now could be changed
// to simply USHORT
// 
// C Syntax
//     typedef unsigned short USHORT;
//
//     unsigned short myVar1;   //OK
//     USHORT         myVar2;   //OK too, easy to understand and write
//
//   USHORT above is still treated as an unsigned short by the compiler
//
// Another example:
//   In many GUI programming systems, Window objects can be created which
//   represent the rectangular shape on the screen. Most of these systems
//   work internally with some sort of data structure that represent Window's
//   size, its location on the screen, it's title, etc.
//     Instead of letting user to peep into this internal structure, the
//   GUI programming functions convert pointer to this internal structure into
//   an opaque type (int). C "typedef" can be used to create a new sensibly
//   named type called "HANDLE" to convey that meaning clearly
//
// C Syntax
//     typedef int    HANDLE;
//
//      /* Assume a fictitous function to create a window on the screen
//        that takes in title, (x, y) location and (w, h) size
//      */
//     HANDLE windowHandle = createWindow("Learning C", 100, 100, 500, 500);
//
//    HANDLE is a new type but internally compiler still treats it as an int
//
//   ================= End of explanatory note on typedefs  ==================

#include <stdio.h>

typedef USHORT unsigned short;


int main(void) {
	unsigned short myVar1 = 10;
	USHORT myVar2 = 20;

	//USHORT can be used as a type in place of "unsigned short"
}

