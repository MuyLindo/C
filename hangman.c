#include <stdio.h>
#include <ncurses.h>

void start(){
	clear();	
	printf("\t\tGuess the word before you hang the hangmen. Good luck!\n\n");
}

void printAlphabet(char *alphabet[]){
	int i;
	for(i = 0; i < 31; i++){
		printf("%s",alphabet[i]);
	}
}

void checkLetter(char *alphabet[], char *letter){
	for (int i = 0; i < 31; i++){
		if(alphabet[i] == letter){
			alphabet[i] = (char*)"  ";
		}
	}
}

int main(int argc, char const *argv[])
{
	char *words[8] = { "ABILITY", "ACTUALLY", "ADVENTURE", "BUILDING", "COMBINATION", "CONFLICT", "EQUIPMENT", "ETHNIC"};
	char *alphabet[31] = { "A ", "B ", "C ", "D ", "E ", "F ", "\n",
						 "G ", "H ", "I ", "J ", "K ", "L ", "\n",
						 "M ", "N ", "O ", "P ", "Q ", "R ", "\n",
						 "S ", "T ", "U ", "V ", "W ", "X ", "\n",
						 "Y ", "Z", "\n"};
	char *hangmanDraw[] = {
	
	"   |--------|\n"
	"            |\n"
	"            |\n"
	"            |\n"
	"            |\n"
	"            |\n"	,

	"   |--------|\n"
	"   O        |\n"
	"            |\n"
	"            |\n"
	"            |\n"
	"            |\n"	,

	"   |--------|\n"
	"   O        |\n"
	"   |        |\n"
	"   |        |\n"
	"            |\n"
	"            |\n"	,

	"   |--------|\n"
	"   O        |\n"
	"  /|        |\n"
	"   |        |\n"
	"            |\n"
	"            |\n"	,

	"   |--------|\n"
	"   O        |\n"
	"  /|\\       |\n"
	"   |        |\n"
	"            |\n"
	"            |\n"	,

	"   |--------|\n"
	"   O        |\n"
	"  /|\\       |\n"
	"  /|        |\n"
	"            |\n"
	"            |\n"	,

	"   |--------|\n"
	"   O        |\n"
	"  /|\\       |\n"
	"  /|\\       |\n"
	"            |\n"
	"            |\n"
	};

	start();
	printAlphabet(alphabet);
	printf("%s\n",hangmanDraw[0]);

	char *letter;
	printf("Enter a letter: ");
	scanf("%s", letter);

	checkLetter(alphabet, letter);
	printAlphabet(alphabet);
	return 0;
}