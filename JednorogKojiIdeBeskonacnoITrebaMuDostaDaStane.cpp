#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct jednorog  {
	char ime [20];
	char krvnaGrupa [5];
	char boja [25];
}j;


int main(){
	struct jednorog j;
	char odabir [20];
			
	FILE * filePointer;
	filePointer = fopen("jednorogg.txt", "w");	
	fprintf(filePointer, "|Ime|   |Krvna Grupa|   |Boja| \n");
	
	do{
	printf ("Kako se zove jednorog: ");
		scanf ("%s", j.ime);
	printf ("koje je krvne grupe "); 
		scanf ("%s", j.krvnaGrupa);
	printf ("koje je boje ");
		scanf("%s", j.boja);
	printf("El bi jos ili ti se neda vise(dosta): ");
		scanf("%s", odabir);
		if(strcmp(j.krvnaGrupa,"a"));
	fprintf(filePointer, "%s\t %s\t\t %s\t\n", j.ime, j.krvnaGrupa, j.boja);
	}while (strcmp(odabir, "dosta"));


	 
	
}
