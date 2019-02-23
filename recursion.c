#include <stdio.h>

long factorial(int numb);
int sumNumber(int numb);

int main(int argc, char const *argv[])
{
	printf("Enter a number: ");
	int numb;
	scanf("%d", &numb);

	//printf("Result: %ld\n", factorial(numb));
	printf("Sum of natural numbers: %d\n", sumNumber(numb));
	return 0;
}

long factorial(int numb){

	if (numb > 1)
		return numb * factorial(numb - 1);
	return 1;
}

int sumNumber(int numb){

	if(numb != 0){
		return numb + sumNumber(numb - 1);
	}

	else return numb;
}