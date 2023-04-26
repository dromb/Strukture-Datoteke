#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>

struct zeko{
	int masa;
	int kolicina_hrane;
	int darezljivost;
	char ime[20];
}z;

void unos()
{
	FILE * fp;
	fp=fopen("zeko3.txt","a");
	
	
	printf("\nUnesi masu zeca:\t");
	scanf("%d", &z.masa);
	printf("\nUnesi kolicinu hrane:\t");
	scanf("%d",&z.kolicina_hrane);
	printf("\nKolika mu je darezljivost 1-10:\t");
	scanf("%d", &z.darezljivost);
	printf("\nUnesi ime zeca:\t");
	scanf("%s", z.ime);
	
	
	fprintf(fp,"%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);
	fclose(fp);
	
}

void ispis(){
	
	FILE * fp;
	fp = fopen("zeko3.txt", "r");
	
	while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4)
	printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);
	
	fclose(fp);
	
}

void filter(){
	
	FILE * fp;
	fp = fopen("zeko3.txt", "r");
	
	char odabir[25];
	int masa=0;
	printf("Kako zelite filtriranje?\n1. da filtrirate po masi\n2. da filtrirate po darezljivosti\n");
		scanf("%s", odabir);
		if(!strcmp(odabir,"1")){
			printf("Do koje mase zelite filtrirat?");
			scanf("%d", &masa);
			while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4){	
				if (masa>z.masa)
					printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);}
		}else {
			printf("Od koje darezljivosti zelite filtrirat?");
			scanf("%d", &masa);
			while(fscanf(fp,"%d %d %d %s",&z.masa, &z.kolicina_hrane, &z.darezljivost, z.ime)==4){	
				if (masa<z.darezljivost)
					printf("%d\t%d\t%d\t%s\n",z.masa, z.kolicina_hrane, z.darezljivost, z.ime);}
		}
		
		fclose(fp);
	}
	






int main()
{
	int odg;
	do{
		printf("--------------------------------------------------\n");
		printf("|\t1. Unos\t\n|\t2. Ispis\t\n|\t3. Filtriranje po masi ili darezljivosti\t\n|\t4. Exit\n ");
		printf("--------------------------------------------------\n");
		scanf("%d",&odg);

		switch(odg){
			case 1: unos();
			break;
			case 2: ispis();
			break;
			case 3: filter();
			break;
			case 4: //exit;
			break;
			default:
				printf("de pise ti od 1 do 4");
		}	
	} while(odg!=4);
}
