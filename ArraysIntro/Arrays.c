#include <stdio.h>

int main(){

//When we want to store a lot of data:
//we can create variables for each piece of data but this would get very tedious / waste of space
// In c, we have a data structure array for this. A native data type.

	int array[5]; //This gives us 5 consecutive spaces of memory
	array[0] = 23;
	array[1] = 24;//An array of type int can only take integers
	array[2] = 25;
	array[3] = 26;
	array[4] = 27;


	printf("The 1st elmnt is %d \n", array[0]);
	printf("The 2nd elmnt is %d \n", array[1]);
	printf("The 3rd elmnt is %d \n", array[2]);
	printf("The 4th elmnt is %d \n", array[3]);
	printf("The 5th elmnt is %d \n", array[4]);
	return 0;
}

