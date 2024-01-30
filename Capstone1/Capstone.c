#include <stdio.h>

void isDivisibleByTwo(int integer){

	if (integer % 2 == 0) 
	{

		printf("the number in question, %d, is divisible by 2 \n", integer);
	}
	}

int main(){
	
	//This is a capstone project combining arrays, if loops, for loops, while loops, arrays and functions.

	int array[10];
	int countdown = 10;

	for(int i = 1; i < 11; i++){

		array[i] = i*i;
	}

	while(countdown > 0){
		printf("count: %d. array element: %d.\n", countdown, array[countdown]);
		countdown--;
	}



	{
		printf("And now for the block scope :)\n");
	}


	printf("Lets see if 10 is divisible by 2: \n");
	isDivisibleByTwo(10);





 	return 0;
}
