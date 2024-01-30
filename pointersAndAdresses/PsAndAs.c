#include <stdio.h>

int main(){

	int x = 42;

	printf("%p \n", &x); // this code returns the address of x. we use the indicator %p instead of %d because the variable &x is of type pointer
	printf("%d \n", *(&x)); // the * is pointer syntax. what does the adress of x point to i.e what is in that adress. Because there is an int in the adress we use %d again now.

	int* testInt = &x;
	int DeReferencedTestInt = *(testInt);
	printf("%p \n", testInt);
	printf("%d \n", DeReferencedTestInt);




	return 0;
}
