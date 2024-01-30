#include <stdio.h>

int main(){

	int array[10];

	for(int i=0; i < 10; i++){

		array[i] = i * 10;
	}

	
	for(int i = 0; i < 10; i++){

		printf("New array element %d: %d \n", i, array[i]);
	}

	return 0;
}
