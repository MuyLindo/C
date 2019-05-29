#include <stdio.h>
#include <ncurses.h>

void start(){
	clear();	
	printf("\t\tGuess the word before you hang the hangmen. Good luck!\n\n");
}

void printAlphabet(char alphabet[]){
	int i;
	for(i = 0; i < 26; i++){
		printf("%c  ",alphabet[i]);
	}
	printf("\n\n");
}

void checkLetter(char alphabet[], char letter){
	char replace = ' ';
	for (int i = 0; i < 26; i++){
		if(alphabet[i] == letter){
			alphabet[i] = replace;
		}
	}
}

int main(int argc, char const *argv[])
{
	char *words[8] = { "ABILITY", "ACTUALLY", "ADVENTURE", "BUILDING", "COMBINATION", "CONFLICT", "EQUIPMENT", "ETHNIC"};
	char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
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

	char letter;
	printf("Enter a letter: ");
	scanf("%s", &letter);

	checkLetter(alphabet, letter);
	printAlphabet(alphabet);
	return 0;
}