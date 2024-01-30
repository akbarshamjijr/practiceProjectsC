#include <stdio.h>

//recursion is the idea of callng a function within that same function.

int countdown(int x){

	if (x < 1)
	{
		return 0;
	}
	else
	{
		printf("%d \n", x);
		return (countdown(x-1));
	}
}




int main(){

printf("%d",  countdown(10));
	

	

 	return 0;
}
