#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*
		Практически задачи:
		1. Имате масив с целочислени числа. Изведете 5-те най-големи члена на масива.
		2. Имате стринг. Например "Hello, I am Iva." Обърнете стринга - "Iva am I ,Hello"
		3. Преобразувайте от десетично в шестнайсетично числото 35, като нека резултате бъде стринг с префикс "0x".Например
		35 = "0x23"


		!При решаването на задачите е забранено да се ползват допълнителни библиотеки като например "string.h"!
		!Търсете най-оптималния вариант за решаване на задачите"!
	*/
	
	int array[10] = {1, 9, 15, 64, 48, 62, 7, 18, 16, 51}

	int i,j;

	for (i = 0; i < 10; i++){
		for(j = 0; j < 10 - i; j++){
			if(array[i] < array [i+1]){
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}

	for(i = 0; i <= 5; i++){
		printf("%d ", array[i]);
	}

	return 0;
}