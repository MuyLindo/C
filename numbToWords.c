#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	char* array[100];
	int i = 0, j;
	printf("Enter a number: ");
	scanf("%d", &number);

	while(number != 0){
		switch (number % 10){
			case 0:
				array[i++] = "zero"; break;
			case 1:
				array[i++] = "one"; break;
			case 2:
				array[i++] = "two"; break;
			case 3:
				array[i++] = "three"; break;
			case 4:
				array[i++] = "four"; break;
			case 5:
				array[i++] = "five"; break;
			case 6:
				array[i++] = "six"; break;
			case 7:
				array[i++] = "seven"; break;
			case 8:
				array[i++] = "eight"; break;
			case 9:
				array[i++] = "nine"; break;
		}
		number /= 10;
	}

	for(j = i-1; j >= 0; j--){
		printf("%s ", array[j]);
	}

	printf("\n");
	return 0;
}