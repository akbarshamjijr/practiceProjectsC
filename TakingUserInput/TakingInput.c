#include <stdio.h>

int main(){

	int x = 0;
	puts("Enter a number for x: \n");
	scanf("%d", &x); //the & symbol provides the adress of the variable it comes before. the adress in the memory of the computer.
	//NOTE: scanf assigns a number in this case to the MEMORY OF THE VARIABLE. the variable's memory now refers to whichever number.
	printf("So, you chose %d as x.. interesting \n", x);

	
	return 0;
}
