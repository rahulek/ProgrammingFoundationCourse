#include <stdio.h>

//Step 1: Define a struct for Computer
struct Computer {
	char brand[25];  //Brand Name
	char type[10];   //type ; "laptop", "desktop", "mobile", "iot"
	int  price;      //Price in Rupees
	int  monthsOld;  //How old? in months;
};


int main(void) {
	//Step 2: Create 3 computers
	struct Computer myLaptop1 = {
		"Dell Inspiron",
		"laptop",
		34567,
		48
	};

	struct Computer myLaptop2 = {
		"Macbook Air",
		"laptop",
		145000,
		15
	};

	struct Computer myMobile = {
		"Samsung Galaxy S10",
		"mobile",
		57000,
		36,
	};


	//Step 3: Create array of all these 3 computers
	struct Computer myDevices[3] = {
		myLaptop1,
		myLaptop2,
		myMobile
	};



	//Step 4: Loop through all the array computers and print some info
	for(int i=0; i<3; i++) {
		printf("Brand:     %s\n", myDevices[i].brand);
		printf("Price:  Rs.%d\n", myDevices[i].price);
		printf("~~~~~~~~~~~~~\n");
	}


	//Done
	return 0;


}