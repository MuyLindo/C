#include <stdio.h>

long factorial(int numb);
int sumNumber(int numb);
void printNumber(int numb);

int main(int argc, char const *argv[])
{
	// printf("Enter a number: ");
	int numb = 1;
	// scanf("%d", &numb);

	//printf("Result: %ld\n", factorial(numb));
	//printf("Sum of natural numbers: %d\n", sumNumber(numb));


	printNumber(numb);

	return 0;
}

//Use recursion to find the factorial of a number
long factorial(int numb){

	if (numb > 1)
		return numb * factorial(numb - 1);
	return 1;
}

//Finds sum of the numbers
int sumNumber(int numb){

	if(numb != 0){
		return numb + sumNumber(numb - 1);
	}

	else return numb;
}

//Prints the numbers from 1 to without loop
void printNumber(int numb){
	if(numb <=100){
		printf("%d ", numb);
		printNumber(numb + 1);
	} 
}