#include <stdio.h>
#include <string.h>

//In this program, I want to show -
//  - given a buffer (array) of bytes,
//    how you can access it with a single
//    pointer.
//  - this pointer can be cast into other
//    pointer types
//  - When we access the memory block with
//    certain type of pointer, the bytes
//    that get read/written are based on
//    the pointer type.
//
// We start with a raw char buffer of [25];
//   - Then, we store "Marcus Aurelius" (16 = 15 + 1 NULL byte)
//   - Then, we move our pointer past the NULL byte
//     and store at integer value 15 (4 bytes)
//   - Then we move past those 4 bytes and store 2 short
//     elements - 161 and 180, each taking 2 bytes.
//   - total of 25 bytes thus -
//       - 16 bytes name (with a NULL termination)
//       -  4 bytes (int) with the value 15
//       -  2 bytes (short) with the value of 161
//       -  2 bytes (short) with the value of 180
//       -  1 byte (char) set to 0xFF

int main(void) {
	//Buffer pointer, initially does not point anywere, its NULL
	void* pMem = NULL;

	//Buffer of 25 bytes
	//Local var, contents all random
	char buffer[25];  

	//Point pointer to buffer.
	pMem = (void*)(&buffer[0]);

	//Step 1: Store "name"
	//We need to convert pMem to a char* and then do strcpy
	strcpy((char*)pMem, "Marcus Aurelius");

	//Step 2: Move pMem to the byte that follows the NULL byte at the end of the name
	//Because we typecast a pointer to (char*) and then add 16, it will move by
	//16 * sizeof(char) = 16 bytes, thus pointing to a byte that follows the NULL termination
	pMem = (char*)pMem + 16;

	//Step 3: Now store an int value of 15
	//Now, the same pMem can be cast into an (int*).
	//When we now store the value of 15 with an int*, 4 bytes (sizeof int) will get affected
	*((int*)pMem) = 15;

	//Step 4: Move past an int
	pMem = (int*)pMem + 1;

	//Step 5: Now store 1st short value
	//Cast the pointer to short* so that only 2 bytes would get affected
	*((short*)pMem) = 161;

	//Step 6: Move ahead by 2 bytes
	pMem = (short*)pMem + 1;

	//Step 7: Store next short value
	//Same as Step 5
	*((short*)pMem) = 180;

	//Step 8: Move ahead by 2 bytes
	pMem = (short*)pMem + 1;

	//Step 9: We are at the last byte of our 25 byte buffer
	//Using (char*) store the byte 0xFF there
	*((char*)pMem) = 0xFF;


	//Step 10;
	//Use LLDB/GDB and monitor each step in which we use a single 
	//pointer to keep updating the underlying memory block of bytes
	//affecting different sizes every time.


	//Done
	return 0;
}