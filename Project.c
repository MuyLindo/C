#include <stdio.h>
#include <stdlib.h>

 
 int main(int argc, char const *argv[])
 {
 	system("clear");

 	printf("\t\t\tMENU\n\n");
 	printf("\t\t1. Add a new actor \n");
 	printf("\t\t2. Actors\n");
 	printf("\t\t3. Exit\n");

 	char name [25];
 	int age;
 	char description [255];
 	FILE *file;

 	int mode;
 	printf("Choose an option to continue: ");
 	scanf("%d", &mode);

 	switch (mode){
 		case 1:
 			system("clear");

 			file = fopen("Actors.txt", "w");
 			
 			if(file == NULL){
 				printf("ERROR opening file!\n");
 				exit(1);
 			}

 			printf("Enter name: ");
 			scanf("%s", name);
 			fprintf(file, "%s\n", name);
 			printf("\nEnter age: ");
 			scanf("%d", &age);
 			fprintf(file, "%d\n", age);
 			printf("\nEnter description: ");
 			scanf("%s", description);
 			fprintf(file, "%s\n", description);

 			fclose(file);
 			break;

 		case 2:
 			system("clear");
 			file = fopen("Actors.txt", "r");

 			if(file == NULL){
 				printf("ERROR opening file!\n");
 				exit(1);
 			}

 			while(!feof(file)){
 				fscanf(file, "%s", name);
 				printf("Name:%s\n", name);
 				fscanf(file, "%d", &age);
 				printf("Age: %d\n", age);
 				fscanf(file,"%s", description);
 				printf("Description:\n%s\n", description);
 			}

 			fclose(file);
 			break;

 		case 3:
 		return 0;

 		default: 
 			system("clear");
 			printf("Enter number between 1 and 3!\n");
 	}
 	return 0;
 }