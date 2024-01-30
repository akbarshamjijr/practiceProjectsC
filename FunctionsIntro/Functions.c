#include <stdio.h>

int square(int arg){
	return (arg * arg);
}

void printHello(void){

	puts("Hello");
}
int main(){
	int x = 15;
	printf("The square root of %d is %d \n", x, square(x));
	printHello(); 
	return 0;
}
