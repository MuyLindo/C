#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *hangmanDraw[]={
	
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

	printf("%s\n",hangmanDraw[6]);
	return 0;
}