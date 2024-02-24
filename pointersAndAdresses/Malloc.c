#include <stdio.h>
#include <stdlib.h>


//A use case of poitners and adresses is that we can create dynamic arrays that run in run time instead of beforehand.

int main(){
	
	int ArraySize;
	scanf("%d", &ArraySize); 
	int* DynamicArray = malloc(sizeof(int)*ArraySize);

	for(int i = 0; i < ArraySize; i++){
		
		DynamicArray[i] = 7;
		
		}


	for(int j = 0; j < ArraySize; j++){
		printf("%d \n", DynamicArray[j]);
	}
	free(DynamicArray);	



	return 0;
}
