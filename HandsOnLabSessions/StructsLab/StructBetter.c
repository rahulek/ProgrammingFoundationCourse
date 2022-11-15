#include <stdio.h>
#include <string.h>  //strcpy, etc.

#define TITLE_LENGTH 25
#define AUTHORS_LENGTH 40

//Step 1: Define a global struct type
struct Book {
	char title[TITLE_LENGTH];      //24 chars + 1 NULL to store the title
	char authors[AUTHORS_LENGTH];    //one or more authors separated by comma
	int  yearPublished;  //a 4-byte int
	int  priceInRupees;  //a 4-byte int
};

//Step 2: Write wrapper functions that work on struct fields - get/set
//  (2-a) a ConstrctBook function
//  Parameters - 
//     Pointer to the Book struct that needs to be constructed/initialized
//     title - title of the new book
//     authors - authors of the new book
//     year    - publication year of the new book
//     price   - price of the new book in Rupees
// Returns - 
//     None  (void)
void ConstructBook(struct Book* pBook, char* title, char* authors, int year, int price) {
	//Copy the passed title parameter into the title field
	//We use strncpy to make sure we copy only those many bytes as our title field has
	//If user passes a string which has more chars, we will not overflow our buffer
	strncpy(pBook->title, title, TITLE_LENGTH-1);  //-1 because we need 1 more to store NULL

	//Copy the passed authors parameter into the authors field
	strncpy(pBook->authors, authors, AUTHORS_LENGTH-1);

	//Set the year and price fields to the parameters passed in
	pBook->yearPublished = year;
	pBook->priceInRupees = price;

	//Done
	return;
}

//(2-b) Change the Book's title to a new title
//  Parameters -
//     pBook    - pointer to the book, the title of which needs to be modified
//     newTitle - book's new title
//  Returns
//     None
void setBookTitle(struct Book* pBook, char* newTitle) {
	//Only change the title field
	strncpy(pBook->title, newTitle, TITLE_LENGTH-1);

	//Done
	return;
}

//(2-C) Get the Book's title
//  Parameters -
//     pBook    - pointer to the book, the title of which needs to be modified
//  Returns
//     Pointer to the Book's title
char* getBookTitle(struct Book* pBook) {
	return pBook->title;
}


//------- Similar functions can be written for other Book fields ---------



//(2-D) Get the whole book - copy the information into a new Book
// Parameters -
//   pSrcBook -> Book from where the information is extracted
//   pDestBook -> Book to where the information is to be copied
// Returns - 
//    None
void copyBookInfo(struct Book* pSrcBook, struct Book* pDestBook) {

	strncpy(pDestBook->title, pSrcBook->title, TITLE_LENGTH-1);
	strncpy(pDestBook->authors, pSrcBook->authors, AUTHORS_LENGTH-1);
	pDestBook->yearPublished = pSrcBook->yearPublished;
	pDestBook->priceInRupees = pSrcBook->priceInRupees;

	//Done
	return;
}


//(2-E) Print the details of the given book
// Parameters
//   pBook - Pointer to the book struct, info for which is to be printed
// Returns
//   None
void printBook(struct Book* pBook) {
	printf("============ Book Info ==========\n");
	printf("\tTitle:        %s\n", pBook->title);
	printf("\tAuthor(s):    %s\n", pBook->authors);
	printf("\tPublished In: %d\n", pBook->yearPublished);
	printf("\tPrice:        Rs.%d\n", pBook->priceInRupees);

	//Done
	return;
}

int main(void) {

	//Step 3:
	//Create 2 Books
	struct Book book1;  //memory is allocated but the fields are not initialized
	struct Book book2;  //  ------ same as above ----------

	//Step 4:
	//Initialize both the books

	//1st book
	ConstructBook(&book1,              
		         "Twelve Casears",     
		         "Suetonius",          
		         135,                  
		         675                  
		        );
	//2nd book
	ConstructBook(&book2,
		          "Kublai Khan",
		          "John Man",
		          2017,
		          987
                );

	//Print Both the books
	printBook(&book1);
	printBook(&book2);


	printf("==============================\n");

	//What's the title of Book1?
	//I can access book1.title directly too
	//but using an accessor method creates a better code encapsulation
	printf("Book 1's title: %s\n", getBookTitle(&book1));

	//What's the price of Book2?
	//I am using a direct field accessor but see above for the better practice
	printf("Book 2's price: Rs. %d\n", book2.priceInRupees);


	printf("======= Book CopyInfo ==============\n");
	//Get all the fields of book1 into a completely new book
	struct Book aNewBook;  //mem is allocated but fields have random data
	copyBookInfo(&book1, &aNewBook); //copy book1's info into aNewBook

	//Now print the newBook
	printBook(&aNewBook);


	//Done
	return 0;
}